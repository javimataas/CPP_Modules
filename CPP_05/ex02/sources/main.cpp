/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 19:53:29 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:06:38 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp" 

void formTest(AForm &f, int gradeA, int gradeB)
{

    Bureaucrat	b("B", gradeB);
    Bureaucrat	a("A", gradeA);
    
    std::cout << f << std::endl;
    std::cout << b << std::endl;
    std::cout << a << std::endl;

    b.signForm(f);
    b.executeForm(f);
    std::cout << f << std::endl;
    a.signForm(f);
    a.executeForm(f);
    std::cout << f << std::endl;

    std::cout << std::endl;
}

int main(void)
{
    PresidentialPardonForm	presi("presi");
    PresidentialPardonForm  presi2(presi);
    RobotomyRequestForm		robo("robo");
    RobotomyRequestForm     robo2(robo);
    ShrubberyCreationForm	shrub("shrub");
    ShrubberyCreationForm   shrub2(shrub);

    formTest(shrub, 137,145);
    formTest(shrub2, 144, 150);
    formTest(robo, 45, 72);
    formTest(robo2, 71, 137);
    formTest(presi, 5,25);
    formTest(presi2, 26, 137);

    return (0);
}