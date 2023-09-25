/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:50:47 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:09:53 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap")
{
    this->name = "FragTrap";
    this->hit_p = FRAG_HIT_P;
    this->energy_p = FRAG_ENERGY_P;
    this->attack_d = FRAG_ATTACK_D;
    std::cout << "FragTrap default constructar called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hit_p = FRAG_HIT_P;
    this->energy_p = FRAG_ENERGY_P;
    this->attack_d = FRAG_ATTACK_D;
    std::cout << "FragTrap name constructar called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &og) : ClapTrap(og)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &og)
{
    std::cout << "FragTrap assignment operator called" << std::endl;
    this->name = og.name;
    this->hit_p = og.hit_p;
    this->energy_p = og.energy_p;
    this->attack_d = og.attack_d;

    return (*this);
}

void    FragTrap::attack(const std::string &target)
{
    std::cout << "FragTrap " << this->name;
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

void    FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap " << this->name << " requests a high five!" << std::endl;
}