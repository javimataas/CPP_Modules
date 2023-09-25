/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:22:33 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:09:50 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamondTrap1("FirstDiamond");
	DiamondTrap	diamondTrap2("SecondDiamond");

	diamondTrap1.attack(diamondTrap2.getName());
	diamondTrap2.takeDamage(diamondTrap1.getAttackDamage());
	diamondTrap2.beRepaired(20);
	diamondTrap2.guardGate();
	diamondTrap2.highFiveGuys();
	diamondTrap1.whoAmI();
}