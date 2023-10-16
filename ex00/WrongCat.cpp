/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:38:57 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/12 10:30:42 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << " WrongCat default constructor called " << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other)
{
	std::cout << " WrongCat copy constructor called " << std::endl;
	*this = other;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << " WrongCat destructor called " << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &c)
{
    std::cout << " WrongCat operator= function called " << std::endl;
	this->_type = c._type;
	return (*this);
}

std::string	WrongCat::getType(void) const
{
    std::cout << " WrongCat getType function called " << std::endl;
	return ("this is a " + this->_type);
}

void    WrongCat::makeSound(void) const
{
    std::cout << " WrongCat makeSound function called " << std::endl;
    std::cout << this->_type << " : Miaou Miaou Miaou ahahahah Wrongcat !!!!!" << std::endl;
}