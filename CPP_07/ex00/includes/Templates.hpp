/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 08:13:31 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:08:54 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

# include <iostream>
# include <string>

template <typename T>
void	swap(T &a, T &b)
{
    T	tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T	min(T a, T b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
T	max(T a, T b)
{
    if (a > b)
        return (a);
    return (b);
}

template <typename T>
void    test(T a, T b)
{
    std::cout << "a: " << a << " b: " << b << std::endl;
    swap(a, b);
    std::cout << "swap(a, b)" << std::endl;
    std::cout << "a: " << a << " b: " << b << std::endl;
    std::cout << "min: " << ::min(a, b) << std::endl;
    std::cout << "max: " << ::max(a, b) << std::endl;
    std::cout << std::endl;
}
#endif