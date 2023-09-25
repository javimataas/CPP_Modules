/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:22:49 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:11:47 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					value;
		static const int	f_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &og);
		~Fixed(void);

		Fixed &operator=(const Fixed &og);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif