/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:59:01 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:05:06 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  b1("b1", 1);
    Bureaucrat  b2("b2", 150);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;

    try
    {
        Bureaucrat  b3("b3", 0);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  b4("b4", 151);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  b5("b5", 1);
        b5.incrementGrade();
        std::cout << b5 << std::endl;
        b5.incrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  b6("b6", 150);
        b6.decrementGrade();
        std::cout << b6 << std::endl;
        b6.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}