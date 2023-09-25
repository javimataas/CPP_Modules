/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:56:24 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:10:37 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap clap("CLAPTYPE");
    ScavTrap scav("SCAVTYPE");
    FragTrap frag("FRAGTYPE");

    frag.highFiveGuys();
    scav.guardGate();
    clap.attack(frag.getName());
    frag.takeDamage(clap.getAttackDamage());
    frag.attack(scav.getName());
    scav.takeDamage(frag.getAttackDamage());
    scav.attack(clap.getName());
    clap.takeDamage(scav.getAttackDamage());
    frag.highFiveGuys();
    scav.guardGate();
    clap.beRepaired(10);
    return (0);
}