/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:31:22 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 20:12:25 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"
#include <iostream>
#include <list>

int	main(void)
{
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }

    {
        std::cout << "-----LIST TEST-------" << std::endl;

        std::list<int> l;
        l.push_back(5);
        l.push_back(17);
        std::cout << l.back() << std::endl;
        l.pop_back();
        std::cout << l.size() << std::endl;
        l.push_back(3);
        l.push_back(5);
        l.push_back(737);
        //[...]
        l.push_back(0);
        std::list<int>::iterator it2 = l.begin();
        std::list<int>::iterator ite2 = l.end();
        ++it2;
        --it2;
        while (it2 != ite2)
        {
            std::cout << *it2 << std::endl;
            ++it2;
        }
    }
    return 0;
}