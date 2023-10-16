#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <iomanip>
# include "Animal.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat(Cat const &other);
		~Cat();
		Cat			&operator=(Cat const &c);
		std::string	getType(void) const;
		void		makeSound(void) const;

	private:

		std::string	_type;

};

#endif