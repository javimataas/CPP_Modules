/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm copy.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:56:55 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:07:31 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm("ShrubberyCreationForm", ShrubberyCreationForm::_signGrade, ShrubberyCreationForm::_execGrade)
{
	this->_target = "default";
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("ShrubberyCreationForm", ShrubberyCreationForm::_signGrade, ShrubberyCreationForm::_execGrade)
{
	this->_target = target;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &source) :
	AForm(source)
{
	*this = source;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &source)
{
	if (this != &source)
	{
		this->_target = source.getTarget();
	}
	return (*this);
}

std::string const	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void				ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	if (this->getSigned() == false)
		throw AForm::NotSignedException();
	std::ofstream ofs;
	std::string filename = this->getTarget();
	filename.append("_shrubbery");
	ofs.open(filename.c_str());
	
	ofs << "      ###" << std::endl;
	ofs << "     #o###" << std::endl;
	ofs << "   #####o###" << std::endl;
	ofs << "  #o#\\#|#/###" << std::endl;
	ofs << "   ###\\|/#o#" << std::endl;
	ofs << "    # }|{  #" << std::endl;
	ofs << "      }|{  " << std::endl;
	ofs << "      }|{  " << std::endl;
	ofs << std::endl;
	ofs << "      ###" << std::endl;
	ofs << "     #o###" << std::endl;
	ofs << "   #####o###" << std::endl;
	ofs << "  #o#\\#|#/###" << std::endl;
	ofs << "   ###\\|/#o#" << std::endl;
	ofs << "    # }|{  #" << std::endl;
	ofs << "      }|{  " << std::endl;

	ofs.close();
	
	return ;
}