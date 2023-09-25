/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:45:12 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:09:52 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

# define FRAG_HIT_P 100
# define FRAG_ENERGY_P 100
# define FRAG_ATTACK_D 30

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &og);
		~FragTrap(void);

		FragTrap &operator=(const FragTrap &og);

		void	attack(const std::string &target);
		void	highFiveGuys(void);
};

#endif