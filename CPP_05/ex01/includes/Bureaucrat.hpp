/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:46:26 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/22 21:14:41 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
    public:
        Bureaucrat(void);
        Bureaucrat(Bureaucrat const &source);
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat(void);
        
        Bureaucrat          &operator=(Bureaucrat const &source);

        std::string const   &getName(void) const;
        int                 getGrade(void) const;

        void                incrementGrade(void);
        void                decrementGrade(void);

        void                signForm(Form &form);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        static int const           maxGrade = 1;
        static int const           minGrade = 150;


    private:
        std::string const   _name;
        int                 _grade;
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &source);

#endif