#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called\n";
    this->brain = new Brain();
    this->type = "Dog";
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog copy constructor called\n";
    this->brain = new Brain();
    *this = copy;
}

Dog& Dog::operator=(const Dog& copy) {
    Animal::type = copy.type;
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
