/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:40:18 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/12 10:40:28 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "   Dog default constructor called " << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "   Dog copy constructor called " << std::endl;
	*this = other;
	return ;
}

Dog::~Dog()
{
	std::cout << "   Dog destructor called " << std::endl;
}

Dog	&Dog::operator=(Dog const &c)
{
	std::cout << "   Dog operator= function called " << std::endl;
	this->_type = c._type;
	return (*this);
}

std::string	Dog::getType(void) const
{
	std::cout << "   Dog getType function called " << std::endl;
	return ("this is a " + this->_type);
}

void	Dog::makeSound(void) const
{
	std::cout << "   Dog makeSound function called " << std::endl;
	std::cout << this->_type << " : Wouaf Wouaf Wouaf !!!" << std::endl;
}