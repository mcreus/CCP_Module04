/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:00:36 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/12 14:30:30 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "  Cat default constructor called " << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &other) : Animal(other)
{
	std::cout << "  Cat copy constructor called " << std::endl;
	this->_type = other._type;
	_brain = new Brain(*other.getBrain());
	return ;
}

Cat::~Cat()
{
	std::cout << "  Cat destructor called " << std::endl;
	delete (_brain);
}

Cat	&Cat::operator=(Cat const &c)
{
    std::cout << "  Cat operator= function called " << std::endl;
	this->_type = c._type;
	return (*this);
}

std::string	Cat::getType(void) const
{
    std::cout << "  Cat getType function called " << std::endl;
	return ("this is a " + this->_type);
}

void    Cat::makeSound(void) const
{
    std::cout << "  Cat makeSound function called " << std::endl;
    std::cout << this->_type << " : Miaou Miaou Miaou !!!!!" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	std::cout << "  Cat getBrain function called " << std::endl;
	return (this->_brain);
}