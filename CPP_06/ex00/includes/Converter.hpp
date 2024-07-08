/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:21:44 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 17:51:20 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream> // std::cout
# include <string> // std::string
# include <sstream> // std::stringstream

class ScalarConverter
{
	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &source);
		~ScalarConverter(void);
		ScalarConverter &operator=(ScalarConverter const &source);

	public:
		static void	convert(std::string str);
};

#endif