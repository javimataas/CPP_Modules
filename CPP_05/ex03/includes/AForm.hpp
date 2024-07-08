/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 00:38:28 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 17:38:17 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class AForm
{
    private:
        std::string const   _name;
        bool                _signed;
        int const           _gradeToSign;
        int const           _gradeToExec;
    
    public:
        AForm(void);
        AForm(std::string name, int grade_to_sign, int grade_to_exec);
        AForm(AForm const &source);
        virtual ~AForm(void);

        AForm &operator=(AForm const &source);

        std::string const   getName(void) const;
        bool                getSigned(void) const;
        int                 getGradeToSign(void) const;
        int                 getGradeToExec(void) const;

        void                beSigned(const Bureaucrat &bur);
        virtual void        execute(Bureaucrat const &executor) const = 0;

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

        class NotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class AlreadySignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, AForm const &source);

#endif