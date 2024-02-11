#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
        void setType(std::string);
        virtual Brain* getBrain() const;
};

#endif
