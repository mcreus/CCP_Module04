/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:49:54 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/12 14:51:07 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << " Animal default constructor called " << std::endl;
}



AAnimal::AAnimal(AAnimal const &other)
{
	std::cout << " Animal copy constructor called " << std::endl;
	*this = other;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout << " Animal destructor called " << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &c)
{
	std::cout << " Animal operator= called " << std::endl;
	this->_type = c._type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	std::cout << " Animal getType function called " << std::endl;
	return ("this is a " + this->_type);
}