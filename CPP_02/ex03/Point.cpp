/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:46:06 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:12:38 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	(Fixed)this->x = 0;
	(Fixed)this->y = 0;
}

Point::Point(float const x, float const y) : x(x), y(y)
{
}

Point::Point(Point const &og) : x(og.getX()), y(og.getY())
{
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}

Point	&Point::operator=(Point const &og)
{
	if (this != &og)
	{
		(Fixed) x = og.getX();
		(Fixed) y = og.getY();
	}
	return (*this);
}

Point::~Point(void)
{
}
