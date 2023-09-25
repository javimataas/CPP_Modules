/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:33:51 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:20:12 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(NULL)
{
    this->name = name;
}

HumanB::~HumanB(void)
{
}

void    HumanB::attack(void)
{
    std::cout << this->name;
    if (weapon)
        std::cout << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << " has no weapon to attack with." << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}