/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:26:08 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/08/07 19:39:25 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"
int	main(int argc, char **argv)
{   
    RPN rpn;

    if (argc != 2)
    {
        std::cout << "Usage: ./RPN \"expression\"" << std::endl;
        return (1);
    }
    rpn.process(argv[1]);

    return (0);
}