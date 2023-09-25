/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:46:47 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/20 18:39:07 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		Animal(void);
		Animal(const Animal &og);
		std::string type;
	public:
		virtual	~Animal(void);

		Animal	&operator=(const Animal &og);

		std::string		getType(void) const;

		virtual void	makeSound(void) const;
};

#endif