/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:36:56 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/20 18:38:09 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	brainTest(void)
{
	std::cout << std::endl << "---- BRAIN TEST INIT ----" << std::endl << std::endl;
	int	ideas = 1;
	
	Dog	*dogs[2];
	for (int i = 0; i < 2; i++)
	{
		dogs[i] = new Dog();
		for (int j = 0; j < 3; j++)
		{
			dogs[i]->getBrain()->setIdea(std::to_string(ideas) + "º idea");
			ideas++;
		}
	}

	Cat	*cats[2];
	for (int i = 0; i < 2; i++)
	{
		cats[i] = new Cat();
		for (int j = 3; j < 6; j++)
		{
			cats[i]->getBrain()->setIdea(std::to_string(ideas) + "º idea");
			ideas++;
		}
	}

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			std::cout << dogs[i]->getBrain()->getIdea(j) << std::endl;

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			std::cout << cats[i]->getBrain()->getIdea(j) << std::endl;

	std::cout << std::endl << "---- BRAIN TEST DONE ----" << std::endl;
}

void	animalTest(void)
{
	std::cout << std::endl << "---- ANIMAL TEST INIT ----" << std::endl << std::endl;

	Animal	*animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
	{	
		animals[i]->makeSound();
		delete animals[i];
	}
	
	std::cout << std::endl << "---- ANIMAL TEST DONE ----" << std::endl;
}

int	main(void)
{
	brainTest();
	animalTest();

	//Animal	*animalTest = new Animal(); ERROR
}