/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:44:00 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:14:16 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class   Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        ~Zombie(void); 
        void    announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif