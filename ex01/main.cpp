/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:10:06 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/12 14:33:54 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	const Animal*	animal[50];
	int				i;

	i = 0;
	while (i < 25)
	{
		animal[i] = new Cat();
		i++;
	}
	while (i >= 25 && i < 50)
	{
		animal[i] = new Dog();
		i++;
	}
	i = 0;
	while (i < 50)
	{
		delete (animal[i]);
		i++;
	}
	return (0);
}