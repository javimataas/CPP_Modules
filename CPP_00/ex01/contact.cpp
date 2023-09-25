/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:26:53 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:13:21 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(void)
{
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone_number = "";
    this->darkest_secret = "";
}

contact::~contact(void)
{
}

std::string read(void)
{
	std::string input;

	std::cin.clear();
	std::getline(std::cin, input);
	return (input);
}

void    contact::create(void)
{
    std::cout << "Please enter the following information:\n";
	std::cout << "First name: ";
	std::cin.ignore();
	this->first_name = read();
    std::cout << "Last name: ";
    this->last_name = read();
    std::cout << "Nickname: ";
    this->nickname = read();
    std::cout << "Phone number: ";
    this->phone_number = read();
    std::cout << "Darkest secret: ";
    this->darkest_secret = read();
    std::cout << this->first_name << " " << this->last_name << " has been added to the phonebook\n";
}

void	contact::tostring(void)
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

void	contact::tolist(void)
{
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->first_name << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->last_name << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->nickname << "|";
	std::cout << std::endl;
}

std::string	contact::get_first_name(void)
{
	return (this->first_name);
}