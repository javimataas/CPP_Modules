/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:18:02 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/08/07 19:41:17 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Pmergeme.hpp"

static bool inputCheck(std::string str)
{
    if (str.find_first_not_of(" 0123456789") != std::string::npos)
        return (false);
    return (true);
}

int	main(int argc, char **argv)
{
    Pmergeme  sortObj;
    if (argc == 1)
        return (0);
    for (int i = 1; i < argc; i++)
    {
        if (!inputCheck(argv[i]))
        {
            std::cout << "Invalid input." << std::endl;
            return (1);
        }
        sortObj.takeInput(argv[i]);
    }
    sortObj.sort();
    return (0);
}