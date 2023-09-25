/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:44:00 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:15:46 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

class   Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        void    setName(std::string name);
};

Zombie  *zombieHorde(int N, std::string name);

#endif