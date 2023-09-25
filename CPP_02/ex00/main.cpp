/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:19:49 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:11:53 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	c.setRawBits(42);
	std::cout << c.getRawBits() << std::endl;
	a = c;
	std::cout << a.getRawBits() << std::endl;
	return (0);
}