/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:46:35 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/20 18:51:12 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(const std::string &type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria &og)
{
    *this = og;
}

AMateria::~AMateria(void)
{
}

AMateria    &AMateria::operator=(const AMateria &og)
{
    if (this != &og)
        this->type = og.type;
    return (*this);
}

const std::string   &AMateria::getType(void) const
{
    return (this->type);
}

void                AMateria::use(ICharacter &target)
{
    (void)target;
}