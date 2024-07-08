/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easy.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:56:08 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 20:09:07 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_HPP
# define EASY_HPP

# include <iostream>
# include <string>
# include <algorithm>

template <typename T>
bool    easyfind(T &container, int n)
{
    if (std::find(container.begin(), container.end(), n) != container.end())
        return (true);
    else
        return (false);
}

template <typename T>
void    fillContainer(T &container, int start, int end)
{
    for (int i = start; i < end; i ++)
        container.push_back(i);
}

template <typename T>
void    basicTest(T &container, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (easyfind(container, i))
            std::cout << "Found " << i << std::endl;
        else
            std::cout << "Did not find " << i << std::endl;
    }
}

#endif