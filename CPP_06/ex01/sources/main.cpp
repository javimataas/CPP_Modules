/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:46:03 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 17:58:28 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include <iostream>

int	main(void)
{
    Data test;
    uintptr_t raw;
    Data *dataPtr;

    test.anystr = "Hello there";
    test.anyint = 42;

    std::cout << "Original: " << &test << std::endl;
    std::cout << test.anystr << std::endl;
    std::cout << test.anyint << std::endl;

    raw = Serializer::serialize(&test);
    std::cout << "Serialized: " << raw << std::endl;
    std::cout << test.anystr << std::endl;
    std::cout << test.anyint << std::endl;

    dataPtr = Serializer::deserialize(raw);
    std::cout << "Deserialized: " << dataPtr << std::endl;
    std::cout << dataPtr->anystr << std::endl;
    std::cout << dataPtr->anyint << std::endl;
}