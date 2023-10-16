/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:33:45 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/12 10:30:37 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << " WrongAnimal default constructor called " << std::endl;
}



WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << " WrongAnimal copy constructor called " << std::endl;
	*this = other;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << " WrongAnimal destructor called " << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &c)
{
	std::cout << " WrongAnimal operator= called " << std::endl;
	this->_type = c._type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	std::cout << " WrongAnimal getType function called " << std::endl;
	return ("this is a " + this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << " WrongAnimal makeSound function called " << std::endl;
	std::cout << this->_type << "Its not the good sound of animal!!! NOT THE GOOOOOOOODDDDDDDD" << std::endl;
}