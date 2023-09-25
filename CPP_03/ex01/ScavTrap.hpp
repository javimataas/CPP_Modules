/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:19:40 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:11:04 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

# define SCAV_HIT_P 100
# define SCAV_ENERGY_P 50
# define SCAV_ATTACK_D 20

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &og);
		~ScavTrap(void);

		ScavTrap &operator=(const ScavTrap &og);

		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif