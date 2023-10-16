/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:49:54 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/12 10:29:50 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << " Animal default constructor called " << std::endl;
}



Animal::Animal(Animal const &other)
{
	std::cout << " Animal copy constructor called " << std::endl;
	*this = other;
	return ;
}

Animal::~Animal()
{
	std::cout << " Animal destructor called " << std::endl;
}

Animal	&Animal::operator=(Animal const &c)
{
	std::cout << " Animal operator= called " << std::endl;
	this->_type = c._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	std::cout << " Animal getType function called " << std::endl;
	return ("this is a " + this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << " Animal makeSound function called " << std::endl;
	std::cout << this->_type << "Its not the good sound of animal!!!" << std::endl;
}