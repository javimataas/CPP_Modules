/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:49:44 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 20:11:14 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int	main(void)
{   
    try
    {
        Span    sp = Span(5);

        sp.addRandom(5);

        std::cout << "test 1 ints: " << sp << std::endl;
        std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "longest span: " << sp.longestSpan() << std::endl;
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }

    try
    {
        Span    sp3 = Span(10);

        sp3.addNumber(42);
        std::cout << "test 2 ints: " << sp3 << std::endl;
        std::cout << sp3.shortestSpan() << std::endl;
        std::cout << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        std::cout << std::endl;
    }

    try
    {
        Span    sp3 = Span(10);

        sp3.addNumber(42);
        std::cout << "test 3 ints: " << sp3 << std::endl;
        std::cout << sp3.longestSpan() << std::endl;
        std::cout << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        std::cout << std::endl;
    }
}