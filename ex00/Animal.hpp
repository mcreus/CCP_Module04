#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>

class Animal
{
	public:

		Animal();
		Animal(Animal const &other);
		virtual ~Animal();
		Animal	&operator=(Animal const &c);
		virtual std::string		getType(void) const;
		virtual void			makeSound(void) const;

	private:

		std::string	_type;

};

#endif