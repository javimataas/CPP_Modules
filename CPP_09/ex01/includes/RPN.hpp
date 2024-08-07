/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:14:12 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/08/07 19:39:08 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RNP_H
# define RNP_H

# include <iostream>
# include <sstream>
# include <string>
# include <stack>

class RPN
{
    public:
        RPN(void);
        RPN(RPN const &source);
        ~RPN(void);

        RPN &  operator=(RPN const &source);

        void    process(std::string input);
        
    private:
        std::stack<int>     _stack;
};

#endif