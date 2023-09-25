/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:01:08 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/08 12:20:52 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(0, 5);
	Point	c(5, 0);
	Point	pointIn(1, 10);
	Point	pointOut(1, 4);

	if (bsp(a, b, c, pointIn))
		std::cout << "Point is inside the triangle!" << std::endl;
	else
		std::cout << "Point is outside the triangle!" << std::endl;

	if (bsp(a, b, c, pointOut))
		std::cout << "Point is inside the triangle!" << std::endl;
	else
		std::cout << "Point is outside the triangle!" << std::endl;

	return (0);
}