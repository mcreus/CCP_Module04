#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <iomanip>

class WrongAnimal
{
	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const &other);
		~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const &c);
		std::string		getType(void) const;
		void			makeSound(void) const;

	private:

		std::string	_type;
};

#endif