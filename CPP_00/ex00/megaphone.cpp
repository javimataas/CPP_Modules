/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:41:26 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:13:08 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (argc > 1 && argv && argv[++i])
    {
        j = -1;
        while (argv[i][++j])
            std::cout << (char)std::toupper(argv[i][j]);
        if (i < argc - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}