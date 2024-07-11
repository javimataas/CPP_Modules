/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:40:51 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/07/11 19:26:27 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Template.hpp"

int	main(void)
{
    int     a[5] = {1, 2, 3, 4, 5};

    iter(a, 5, testPrint<int>);
    iter(a, 5, testAdd<int>);
    std::cout << std::endl;
    iter(a, 5, testPrint<int>);

    std::cout << std::endl;

    std::string b[5] = {"one", "two", "three", "four", "five"};

    iter(b, 5, testPrint<std::string>);
    std::cout << std::endl;
    iter(b, 5, testPrint<std::string>);
    
    return (0);
}