/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:17:55 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/20 18:26:48 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : idx(0)
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &og)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = og;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain   &Brain::operator=(const Brain &og)
{
    std::cout << "Brain assignment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = og.ideas[i];
    return (*this);
}

std::string Brain::getIdea(int idx) const
{
    if (idx < 0 || idx > 99 || this->ideas[idx].length() == 0)
    {
        std::cout << "Error: no idea..." << std::endl;
        return ("");
    }
    return (this->ideas[idx]);
}

void        Brain::setIdea(std::string idea)
{
    if (idx == 99)
        std::cout << "Error: too many ideas..." << std::endl;
    else
    {
        this->ideas[idx++] = idea;
        std::cout << "New idea!" << std::endl;
    }   
}