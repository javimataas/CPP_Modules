/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:42:19 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:07:15 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const &source)
{
	*this = source;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern	&Intern::operator=(Intern const &source)
{
	(void)source;
	return (*this);
}

static AForm  *makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm  *makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm  *makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

const char* Intern::NotAFormException::what() const throw()
{
	return ("Not a form");
}

static int formPos(std::string name)
{
	std::string names[3] = 
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == names[i])
			return (i);
	}

	throw Intern::NotAFormException();
}

AForm   *Intern::makeForm(std::string name, std::string target)
{
	AForm  *form;

	try 
	{
		AForm* (*funcs[3])(std::string) = 
		{
			makeShrubberyCreationForm,
			makeRobotomyRequestForm,
			makePresidentialPardonForm
		};
		
		formPos(name);
		form = funcs[formPos(name)](target);
		std::cout << "Intern creates " << form->getName() << " for " << target << std::endl;
		return (form);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (NULL);
	}

}