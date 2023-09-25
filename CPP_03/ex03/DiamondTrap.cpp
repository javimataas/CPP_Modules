/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 19:12:29 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:09:58 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->name = "DiamondTrap";
    this->hit_p = FragTrap::hit_p;
    this->energy_p = ScavTrap::energy_p;
    this->attack_d = FragTrap::attack_d;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap name constructor called" << std::endl;
    this->name = name;
    this->hit_p = FragTrap::hit_p;
    this->energy_p = ScavTrap::energy_p;
    this->attack_d = FragTrap::attack_d;
}

DiamondTrap::DiamondTrap(const DiamondTrap &og) : ClapTrap(og), ScavTrap(og), FragTrap(og)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = og;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &og)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	if (this != &og)
	{
		this->name = og.name;
		this->hit_p = og.hit_p;
		this->energy_p = og.energy_p;
		this->attack_d = og.attack_d;
	}
	return (*this);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name: " << this->name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
