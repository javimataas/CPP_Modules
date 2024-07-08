/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:38:41 by jmatas-p          #+#    #+#             */
/*   Updated: 2024/04/30 20:10:34 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <list>
# include <numeric>
# include <algorithm>
# include <stdexcept>
# include <cstdlib>
//# include <random>

class Span
{
    private:
        unsigned int    _N;
        unsigned int    _size;
        std::list<int>  _arr;

    public:
        Span(void);
        Span(unsigned int n);
        Span(Span const &source);
        ~Span(void);

        Span    &operator=(Span const &source);

        void    addNumber(int n);
        int     shortestSpan(void);
        int     longestSpan(void);

        void    addRandom(int amount);
        std::list<int>  getArr(void) const;
};

std::ostream    &operator<<(std::ostream &o, Span const &source);

#endif