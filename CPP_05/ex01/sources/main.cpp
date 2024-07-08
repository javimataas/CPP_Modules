/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:48:47 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:06:00 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main(void)
{
    Bureaucrat	b1("B1", 1);
    Bureaucrat	b2("B2", 150);
    Form		f1("F1", 1, 1);
    Form		f2("F2", 150, 150);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;

    b2.signForm(f1);
    std::cout << f1 << std::endl;
    b1.signForm(f1);
    std::cout << f1 << std::endl;
    b2.signForm(f2);
    std::cout << f2 << std::endl;

    return (0);
}