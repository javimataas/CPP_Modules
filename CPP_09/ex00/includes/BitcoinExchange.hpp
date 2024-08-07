/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:56:08 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/08/07 19:37:28 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <sstream>
# include <fstream>
# include <limits>

class BitcoinExchange
{
	public:
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const &source);
		~BitcoinExchange(void);

		BitcoinExchange &operator=(BitcoinExchange const &source);

		void   							takeInput(std::string const &filename);
		void   							takeRates(std::string const &filename);
		std::map<std::string, float>	getRates(void) const;

	private:
		std::map<std::string, float>	_rates;
		bool   							dateSearch(std::string const &date) const;
		void							closestDate(std::string const &date, float value) const;
		std::string						getDate(std::string const &date) const;
}; 

std::ostream	&operator<<(std::ostream &o, BitcoinExchange const &source);

#endif