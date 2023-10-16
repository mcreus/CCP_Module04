#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>

class AAnimal
{
	public:

		AAnimal();
		AAnimal(AAnimal const &other);
		virtual ~AAnimal();
		AAnimal	&operator=(AAnimal const &c);
		virtual std::string		getType(void) const;
		virtual void			makeSound(void) const = 0;

	private:

		std::string	_type;

};

#endif