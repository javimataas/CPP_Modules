/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:29:02 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/08/07 19:39:53 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

RPN::RPN(void)
{
    return ;
}

RPN::RPN(RPN const &source)
{
    *this = source;
    return ;
}

RPN::~RPN(void)
{
    return ;
}

RPN &  RPN::operator=(RPN const &source)
{
    if (this != &source)
    {
        this->_stack = source._stack;
    }
    return (*this);
}

static int stringToi(std::string input)
{
    std::stringstream ss(input);
    int i;

    ss >> i;
    return (i);
}

void   RPN::process(std::string input)
{
    std::stringstream   ssSteps;
    std::stringstream   ss(input);
    std::string         str;
    long long           res;

    while (ss >> str)
    {
        if (str.find_first_not_of("+-*/") == std::string::npos)
        {
            if (this->_stack.size() < 2)
            {
                std::cout << "Error: Not enough operands" << std::endl;
                return ;
            }
            res = this->_stack.top();
            this->_stack.pop();
            ssSteps << this->_stack.top() << " " << str << " " << res << " = ";
            if (str == "+")
                res += this->_stack.top();
            else if (str == "-") 
                res = this->_stack.top() - res;
            else if (str == "*")
                res = this->_stack.top() * res;
            else if (str == "/")
            {
                if (res == 0)
                {
                    std::cout << "Error: Division by zero" << std::endl;
                    return ;
                }
                res = this->_stack.top() / res;
            }
            this->_stack.pop();
            this->_stack.push(res);
            ssSteps << this->_stack.top() << std::endl;
        }
        else if (str.find_first_not_of("0123456789") == std::string::npos)
            this->_stack.push(stringToi(str));
        else
        {
            std::cout << "Error: Invalid input" << std::endl;
            return ;
        }
    }
    std::cout << ssSteps.str();
    std::cout << "Result: " << this->_stack.top() << std::endl;
}