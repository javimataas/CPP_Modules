/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:40:56 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/20 18:51:25 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# include AMATERIA_HPP

#include <iostream>

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(void);
        AMateria(const std::string &type);
        AMateria(const AMateria &og);

        AMateria    &operator=(const AMateria &og);

        const std::string   &getType() const;
        virtual AMateria    *clone() const = 0;
        virtual void        use(ICharacter &target);
};

#endif