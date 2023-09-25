/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:24:11 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:09:46 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap")
{
    this->name = "ScavTrap";
    this->hit_p = SCAV_HIT_P;
    this->energy_p = SCAV_ENERGY_P;
    this->attack_d = SCAV_ATTACK_D;
    std::cout << "ScavTrap default constructar called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hit_p = SCAV_HIT_P;
    this->energy_p = SCAV_ENERGY_P;
    this->attack_d = SCAV_ATTACK_D;
    std::cout << "ScavTrap name constructar called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &og) : ClapTrap(og)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &og)
{
    std::cout << "ScavTrap assignment operator called" << std::endl;
    this->name = og.name;
    this->hit_p = og.hit_p;
    this->energy_p = og.energy_p;
    this->attack_d = og.attack_d;

    return (*this);
}

void    ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << this->name;
	if (this->hit_p == 0)
	{
		std::cout << " is dead!" << std::endl;
		return ;
	}
	if (this->energy_p == 0)
	{
		std::cout << " is out of energy!" << std::endl;
		return ;
	}
	this->energy_p -= 1;
	std::cout << " attacks " << target << ", causing " << this->attack_d << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->name;
    if (this->hit_p == 0)
    {
        std::cout << " is dead!" << std::endl;
        return ;
    }
    std::cout << " has entered in Gate keeper mode" << std::endl;
}
