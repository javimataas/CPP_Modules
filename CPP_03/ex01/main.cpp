/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:38:15 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:10:57 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    firstScav("Scav-1");
    ScavTrap    secondScav("Scav-2");
    ScavTrap    thirdScav("Scav-3");

    firstScav.attack(secondScav.getName());
    secondScav.takeDamage(firstScav.getAttackDamage());
    secondScav.beRepaired(10);
    secondScav.guardGate();
    secondScav = thirdScav;
    secondScav.guardGate();
}