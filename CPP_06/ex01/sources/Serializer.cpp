/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:43:12 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 17:58:08 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer(void)
{
    return ;
}

Serializer::~Serializer(void)
{
    return ;
}

Serializer::Serializer(Serializer const &source)
{
    *this = source;
    return ;
}

Serializer & Serializer::operator=(Serializer const &source)
{
    (void)source;
    return (*this);
}

uintptr_t    Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*        Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}