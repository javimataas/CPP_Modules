/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 15:30:01 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 18:01:48 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

int main(void)
{
    Base *base = generate();
    identify(base);
    identify(*base);
    return (0);
}