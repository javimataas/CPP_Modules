/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:06:08 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/08/07 19:38:01 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
    BitcoinExchange	btc;

    if (argc != 2)
    {
        std::cout << "Usage: ./bitcoin [filename]" << std::endl;
        return (1);
    }
    btc.takeRates("data.csv");
    btc.takeInput(argv[1]);
    return (0);
}