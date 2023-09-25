/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:29:49 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:13:23 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class contact
{
    public:
        contact(void);
        ~contact(void);
        void		create(void);
        void		tolist(void);
        void		tostring(void);
        std::string	get_first_name(void);
	private:
		std::string	first_name;
        std::string	last_name;
        std::string	nickname;
        std::string	phone_number;
        std::string	darkest_secret;
};

#endif