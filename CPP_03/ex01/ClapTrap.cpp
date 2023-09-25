/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:26:02 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:10:53 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("ClapTrap"), hit_p(HIT_P), energy_p(ENERGY_P), attack_d(ATTACK_D)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : name(name), hit_p(HIT_P), energy_p(ENERGY_P), attack_d(ATTACK_D)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &og)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = og;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &og)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this != &og)
	{
		this->name = og.name;
		this->hit_p = og.hit_p;
		this->energy_p = og.energy_p;
		this->attack_d = og.attack_d;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << this->name;
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_p == 0)
	{
		std::cout << this->name << " is dead!" << std::endl;
		return ;
	}
	this->hit_p -= amount;
	std::cout << this->name << " takes " << amount << " points of damage!" << std::endl;
	if (this->hit_p < 0)
		this->hit_p = 0;
	if (this->hit_p == 0)
		std::cout << this->name << " has been killed!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_p == 0)
	{
		std::cout << this->name << " is dead!" << std::endl;
		return ;
	}
	if (this->energy_p == 0)
	{
		std::cout << " is out of energy!" << std::endl;
		return ;
	}
	this->energy_p -= 1;
	this->hit_p += amount;
	std::cout << this->name << " is repaired for " << amount << " points!" << std::endl;
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->attack_d);
}

std::string		ClapTrap::getName(void) const
{
	return (this->name);
}
