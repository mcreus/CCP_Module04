/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:25:26 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/12 14:40:45 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "    Default constructor Brain called " << std::endl;
	int	i;

	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = " OH SHIT !!! I have a brain !!!";
		i++;
	}
	return ;
}

Brain::Brain(Brain const &other)
{
	std::cout << "    Copy constructor Brain called " << std::endl;
	int	i;
	
	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = other._ideas[i];
		i++;
	}
	return ;
}

Brain::~Brain()
{
	std::cout << "    Destructor Brain called " << std::endl;
}

Brain	&Brain::operator=(Brain const &c)
{
    
	std::cout << "    Function operator= Brain called " << std::endl;
	int	i;

	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = c._ideas[i];
		i++;
	}
	return (*this);
}

std::string	*Brain::getIdeas(void)
{
	std::cout << "     Function getIdeas Brain called " << std::endl;
	return (this->_ideas);
}