/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:23:19 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:06:20 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(Bureaucrat::minGrade)
{
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &source) : _name(source.getName())
{
    *this = source;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < Bureaucrat::maxGrade)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > Bureaucrat::minGrade)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
    return ;
}

Bureaucrat::~Bureaucrat(void)
{
    return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &source)
{
    if (this != &source)
    {
        this->_grade = source.getGrade();
    }
    return (*this);
}

std::string const  &Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::incrementGrade(void)
{
    if (this->_grade - 1 < Bureaucrat::maxGrade)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
    return ;
}

void Bureaucrat::decrementGrade(void)
{
    if (this->_grade + 1 > Bureaucrat::minGrade)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
    return ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Cannot have a grade higher than 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Cannot have a grade lower than 150");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &source)
{
    o << source.getName() << ", bureaucrat grade " << source.getGrade();
    return (o);
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
    return ;
}

void Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
    return ;
}

void Bureaucrat::setGrade(int grade)
{
    if (grade < Bureaucrat::maxGrade)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > Bureaucrat::minGrade)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
    std::cout << this->getName() << " grade has been set to " << this->getGrade() << std::endl;
    return ;
}