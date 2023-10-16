
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <iomanip>

class Brain
{

	public:

		Brain();
		Brain(Brain const &other);
		~Brain();
		Brain		&operator=(Brain const &c);
		std::string	*getIdeas(void);

	private:
		std::string	_ideas[100];

};

#endif