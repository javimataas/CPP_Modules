/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:03:29 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:13:31 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class   phonebook
{
    public:
        phonebook(void);
        ~phonebook(void);
        void    diplay_init(void);
        void    add(void);
        void    list(void);
        void    search(void);
        void    exit(void);
    private:
        contact	contacts[8];
        int     contacts_count;
};

#endif