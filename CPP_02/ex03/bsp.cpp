/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:59:37 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:12:28 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	abs(Fixed const a)
{
	return (a < 0 ? a * -1 : a);
}

Fixed	getArea(Point const a, Point const b, Point const c)
{
	Fixed	area;

	area = abs((a.getX() * (b.getY() - c.getY())) + 
			(b.getX() * (c.getY() - a.getY())) + 
			(c.getX() * (a.getY() - b.getY())));

	return (area / 2);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	areaABC = getArea(a, b, c);

	Fixed	areaA = getArea(point, a, b);
	Fixed	areaB = getArea(point, b, c);
	Fixed	areaC = getArea(point, c, a);

	return (areaABC == areaA + areaB + areaC);
}