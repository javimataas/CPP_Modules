/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:22:59 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:07:22 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"
#include "../includes/AForm.hpp"


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
    Intern  someRandomIntern;
    
    AForm   *presi = someRandomIntern.makeForm("presidential pardon", "Bender");
    AForm   *robo = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm   *shrub = someRandomIntern.makeForm("shrubbery creation", "Bender");
    AForm   *fail = someRandomIntern.makeForm("fail", "Bender");

    (void)fail;
    std::cout << std::endl;

    formTest(*shrub, 137,145);
    formTest(*robo, 45, 72);
    formTest(*presi, 5,25);

    delete presi;
    delete robo;
    delete shrub;

    return (0);
}