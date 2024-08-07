/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmergeme.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:06:32 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/08/07 19:41:44 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>
# include <iomanip>

class Pmergeme
{
    public:
        Pmergeme(void);
        Pmergeme(Pmergeme const &source);
        ~Pmergeme(void);

        Pmergeme &	operator=(Pmergeme const &source);

        bool       takeInput(std::string str);
        void       takeTime(void);
        void       printTime(void);
        void       printVec(void);
        void       printLst(void);
        void       sort(void);
        void       sort(std::vector<int> &vec);
        void       sort(std::list<int> &lst);

    private:
        std::vector<int>    _vec;
        std::list<int>      _lst;
        clock_t             _timeVec;
        clock_t             _timeLst;
};

#endif