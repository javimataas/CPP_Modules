/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:05:32 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/20 17:36:19 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(const Cat &og);
		~Cat(void);

		Cat	&operator=(const Cat &og);

		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif