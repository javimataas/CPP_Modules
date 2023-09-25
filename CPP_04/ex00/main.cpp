/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:36:56 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:50:25 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << std::endl;
	std::cout << "meta->getType(): " << meta->getType() << std::endl;
	std::cout << "j->getType(): " << j->getType() << std::endl;
	std::cout << "i->getType(): " << i->getType() << std::endl;
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	const WrongAnimal	*meta2 = new WrongAnimal();
	const WrongCat		*i2 = new WrongCat();

	std::cout << std::endl;
	std::cout << "meta2->getType(): " << meta2->getType() << std::endl;
	std::cout << "i2->getType(): " << i2->getType() << std::endl;
	std::cout << std::endl;
	meta2->makeSound();
	i2->makeSound();
	std::cout << std::endl;

	delete meta2;
	delete i2;
}