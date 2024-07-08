/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:50:09 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:06:51 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
    AForm("RobotomyRequestForm", RobotomyRequestForm::_signGrade, RobotomyRequestForm::_execGrade)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    AForm("RobotomyRequestForm", RobotomyRequestForm::_signGrade, RobotomyRequestForm::_execGrade),
    _target(target)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &source) :
    AForm(source)
{
    *this = source;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &source)
{
    if (this != &source)
    {
        this->_target = source.getTarget();
    }
    return (*this);
}

std::string const   RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    srand(time(NULL));
    if (executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    int rand = std::rand() % 2 + 1;
    if (rand == 1)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << _target << " has NOT been robotomized successfully." << std::endl;
}