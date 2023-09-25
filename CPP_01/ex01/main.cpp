/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:30:15 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:15:42 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int size = 5;
    int i = 0;

    Zombie  *zombies = zombieHorde(size, "ZomZomZom");
    while (i++ < size)
        zombies[i].announce();
    delete [] zombies;
}