#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <iomanip>
# include "Animal.hpp"

class Dog : public Animal
{
    public:

        Dog();
        Dog(Dog const &other);
        ~Dog();
        Dog         &operator=(Dog const &c);
        std::string getType(void) const;
        void        makeSound(void) const;


    private:

        std::string _type;

};

#endif