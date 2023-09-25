/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:03:20 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:12:17 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					value;
		static const int	f_bits = 8;
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &og);
		~Fixed(void);

		bool	operator>(const Fixed &og) const;
		bool	operator<(const Fixed &og) const;
		bool	operator>=(const Fixed &og) const;
		bool	operator<=(const Fixed &og) const;
		bool	operator==(const Fixed &og) const;
		bool	operator!=(const Fixed &og) const;

		Fixed	&operator=(const Fixed &og);
		
		Fixed	operator+(const Fixed &og) const;
		Fixed	operator-(const Fixed &og) const;
		Fixed	operator*(const Fixed &og) const;
		Fixed	operator/(const Fixed &og) const;

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &og);

#endif