/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:13:25 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 20:09:30 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Easy.hpp"
# include <vector>
# include <list>
# include <deque>


int	main(void)
{
    std::vector<int>	v;
    std::list<int>		l;
    std::deque<int>		d;

    fillContainer(v, 1, 5);
    fillContainer(l, 1, 5);
    fillContainer(d, 1, 5);

    std::cout << "Vector: " << std::endl;
    basicTest(v, 0, 6);
    std::cout << std::endl;
    std::cout << "List: " << std::endl; 
    basicTest(l, 5, 8);
    std::cout << std::endl;
    std::cout << "Deque: " << std::endl;
    basicTest(d, 0, 3);

    return (0);
}