/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:24:37 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:13:32 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(void)
{
    this->contacts_count = 0;
}

phonebook::~phonebook(void)
{
}

void    phonebook::diplay_init(void)
{
    std::cout << "You have " << this->contacts_count << " contacts. Please enter a command:\n";
    std::cout << "Please enter a command:\n";
	std::cout << "ADD, SEARCH, EXIT\n";
}

void    phonebook::add(void)
{
    if (this->contacts_count == 8)
        this->contacts_count = 0;
    this->contacts[this->contacts_count].create();
    this->contacts_count++;
}

void	phonebook::list(void)
{
	int i;

	i = 0;
	if (this->contacts[0].get_first_name() == "")
	{
		std::cout << "No contacts to display." << std::endl;
		return ;
	}
	std::cout << "index|first name| last name|  nickname|" << std::endl;
	while (i < 8)
	{
		if (this->contacts[i].get_first_name() != "")
		{
			std::cout << "    " << i << "|";
			this->contacts[i].tolist();
		}
		i++;
	}
	this->search();
}

void	phonebook::search(void)
{
	int i;
	int index;

	i = 0;
	std::cout << "Please enter the index of the contact of your choice: ";
    if (!(std::cin >> index)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid index.\n";
        return;
    }

	if (index < 0 || index >= this->contacts_count)
	{
		std::cout << "Invalid index.\n";
		this->search();
		return ;
	}
	while (i < 8)
	{
		if (i == index)
		{
			this->contacts[i].tostring();
			return ;
		}
		i++;
	}
}

void	phonebook::exit(void)
{
	std::cout << "Closing Phonebook..." << std::endl;
}