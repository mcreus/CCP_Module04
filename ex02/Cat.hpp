#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <iomanip>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:

		Cat();
		Cat(Cat const &other);
		~Cat();
		Cat			&operator=(Cat const &c);
		std::string	getType(void) const;
		void		makeSound(void) const;
		Brain	*getBrain(void) const;

	private:

		std::string	_type;
		Brain		*_brain;

};

#endif