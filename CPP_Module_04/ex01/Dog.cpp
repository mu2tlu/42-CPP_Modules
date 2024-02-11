#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called\n";
    Animal::type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog copy constructor called\n";
    *this = copy;
}

Dog& Dog::operator=(const Dog& copy) {
    Animal::type = copy.type;
    this->brain = new Brain();
    *this->brain = *copy.brain;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "woof woof\n";
}

Brain* Dog::getBrain() const {
    return this->brain;
}

Dog::~Dog() {
    std::cout << "Dog destructor called\n";
    delete brain;
}
