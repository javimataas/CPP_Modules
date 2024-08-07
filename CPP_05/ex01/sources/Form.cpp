/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:51:27 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:05:56 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(void) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExec(150)
{
    return ;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_exec) : _name(name), _signed(false), _gradeToSign(grade_to_sign), _gradeToExec(grade_to_exec)
{
    if (grade_to_sign < 1 || grade_to_exec < 1)
        throw Form::GradeTooHighException();
    else if (grade_to_sign > 150 || grade_to_exec > 150)
        throw Form::GradeTooLowException();
    return ;
}

Form::Form(Form const &source) : _name(source.getName()), _signed(source.getSigned()), _gradeToSign(source.getGradeToSign()), _gradeToExec(source.getGradeToExec())
{
    *this = source;
    return ;
}

Form::~Form(void)
{
    return ;
}

Form &Form::operator=(Form const &source)
{
    if (this != &source)
    {
        this->_signed = source.getSigned();
    }
    return (*this);
}

std::string const  Form::getName(void) const
{
    return (this->_name);
}

bool    Form::getSigned(void) const
{
    return (this->_signed);
}

int     Form::getGradeToSign(void) const
{
    return (this->_gradeToSign);
}

int     Form::getGradeToExec(void) const
{
    return (this->_gradeToExec);
}

void    Form::beSigned(Bureaucrat const &bur)
{
    if (bur.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
    return ;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("too high of a grade.");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("too low of a grade.");
}

std::ostream &operator<<(std::ostream &o, Form const &source)
{
    o << "Form: " << source.getName() << ", signed: " << source.getSigned() << ", grade to sign: " << source.getGradeToSign() << ", grade to exec: " << source.getGradeToExec();
    return (o);
}