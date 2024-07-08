/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:22:18 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 20:12:07 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &source);
		~MutantStack(void);

		MutantStack &operator=(MutantStack const &source);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void);
		iterator	end(void);
};

template<typename T>
MutantStack<T>::MutantStack(void)
{
	std::cout << "MutantStack default constructor called" << std::endl;
	return ;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &source)
{
	std::cout << "MutantStack copy constructor called" << std::endl;
	*this = source;
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	std::cout << "MutantStack destructor called" << std::endl;
	return ;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &source)
{
	std::cout << "MutantStack assignation operator called" << std::endl;
	if (this != &source)
	{
		std::stack<T>::operator=(source);
	}
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator  MutantStack<T>::begin(void)
{
	return (std::stack<T>::c.begin());
}

template<typename T>
typename MutantStack<T>::iterator  MutantStack<T>::end(void)
{
	return (std::stack<T>::c.end());
}

#endif