/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:40:51 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:13:04 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Template.hpp"

void   testString(std::string &a)
{
    a = a.substr(0, 2);
}

int	main(void)
{
    int     a[5] = {1, 2, 3, 4, 5};

    iter(a, 5, testPrint);
    iter(a, 5, testAdd);
    std::cout << std::endl;
    iter(a, 5, testPrint);

    std::cout << std::endl;

    std::string b[5] = {"one", "two", "three", "four", "five"};

    iter(b, 5, testPrint);
    iter(b, 5, testString);
    std::cout << std::endl;
    iter(b, 5, testPrint);
    
    return (0);
}