/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:42:44 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:12:40 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point(void);
		Point(float const x, float const y);
		Point(Point const &og);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		Point	&operator=(Point const &og);

		~Point(void);
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif