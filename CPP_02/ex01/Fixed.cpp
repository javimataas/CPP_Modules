/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:32:50 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:12:04 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << this->f_bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << this->f_bits));
}

Fixed::Fixed(const Fixed &og)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = og;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &og)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = og.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->value / (float)(1 << this->f_bits));
}

int     Fixed::toInt(void) const
{
    return (this->value >> this->f_bits);
}

std::ostream    &operator<<(std::ostream &out, const Fixed &og)
{
    out << og.toFloat();
    return (out);
}