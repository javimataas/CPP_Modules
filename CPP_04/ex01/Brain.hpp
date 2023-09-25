/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:11:14 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/20 17:26:54 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
		int			idx;
	public:
		Brain(void);
		Brain(const Brain &og);
		~Brain(void);

		Brain	&operator=(const Brain &og);

		std::string	getIdea(int idx) const;
		void		setIdea(std::string idea);
};

#endif