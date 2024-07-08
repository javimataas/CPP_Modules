/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:44:19 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:06:49 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
    : AForm("PresidentialPardonForm", PresidentialPardonForm::_signGrade, PresidentialPardonForm::_execGrade)
{
    this->_target = "default";
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", PresidentialPardonForm::_signGrade, PresidentialPardonForm::_execGrade)
{
    this->_target = target;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &source)
    : AForm(source)
{
    *this = source;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &source)
{
    if (this != &source)
    {
        this->_target = source.getTarget();
    }
    return (*this);
}

std::string const   PresidentialPardonForm::getTarget(void) const
{
    return (this->_target);
}

void                PresidentialPardonForm::execute(Bureaucrat const &executor) const
{   
    if (executor.getGrade() > this->getGradeToExec())
        throw AForm::GradeTooLowException();
    if (this->getSigned() == false)
        throw AForm::NotSignedException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    return ;
}
