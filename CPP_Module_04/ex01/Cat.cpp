#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called\n";
    this->brain = new Brain();
    this->type = "Cat";
}

Cat::Cat(const Cat& copy) {
    std::cout << "Cat copy constructor called\n";
    this->brain = new Brain();
    *this = copy;
}

Cat& Cat::operator=(const Cat& copy) {
    Animal::type = copy.type;
    *this->brain = *copy.brain;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "meow meow\n";
}

Brain* Cat::getBrain() const {
    return this->brain;
}

Cat::~Cat() {
    std::cout << "Cat destructor called\n";
    delete brain;
}
