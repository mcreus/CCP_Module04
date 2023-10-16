#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <iomanip>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(WrongCat const &other);
		~WrongCat();
		WrongCat			&operator=(WrongCat const &c);
		std::string	getType(void) const;
		void		makeSound(void) const;

	private:

		std::string	_type;

};

#endif