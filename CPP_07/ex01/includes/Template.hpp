/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:37:11 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/07/11 19:22:20 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

template <typename T>
void   testPrint(T &a)
{
    std::cout << a << std::endl;
}

template <typename T>
void   testAdd(T &a)
{
    a += 1;
}

template <typename T>
void   iter(T *a, int len, void (*f)(const T &))
{
    for (int i = 0; i < len; i++)
        f(a[i]);
}

template <typename T>
void   iter(T *a, int len, void (*f)(T &))
{
    for (int i = 0; i < len; i++)
        f(a[i]);
}

#endif