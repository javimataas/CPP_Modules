/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:40:22 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:11:24 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	first("Robot-1");
	ClapTrap	second("Robot-2");

	first.attack(second.getName());
	second.takeDamage(first.getAttackDamage());
	second.attack(first.getName());
	first.takeDamage(second.getAttackDamage());

	first.beRepaired(3);
	second.beRepaired(2);

	first.attack(second.getName());
	second.takeDamage(first.getAttackDamage());
	second.attack(first.getName());
	first.takeDamage(second.getAttackDamage());

	first.beRepaired(4);
	second.beRepaired(5);
	
	return (0);
}