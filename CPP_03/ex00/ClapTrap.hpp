/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:23:03 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:11:21 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

# define HIT_P 10
# define ENERGY_P 10
# define ATTACK_D 0

class	ClapTrap
{
	private:
		std::string	name;
		int			hit_p;
		int			energy_p;
		int			attack_d;
	public:
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &og);
		~ClapTrap(void);

		ClapTrap	&operator=(const ClapTrap &og);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		int				getAttackDamage(void) const;
		std::string		getName(void) const;
};

#endif