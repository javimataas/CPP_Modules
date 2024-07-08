/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:37:56 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:15:43 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int	main(void)
{
    Array<int>		arr(5);
    Array<int>		arr2(5);

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
        arr2[i] = i * 2;
    }

    std::cout << "arr: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    std::cout << "arr2: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;

    std::cout << "arr2 = arr" << std::endl;
    arr = arr2;
    std::cout << "arr: ";
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    arr[0] = 42;
    std::cout << "arr[0] = 42" << std::endl;
    std::cout << "arr: " << arr[0] << std::endl;

    try
    {
        std::cout << "arr[5]: " << std::endl;
        std::cout << arr[5] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "arr[5]: " << e.what() << std::endl;
    }

}