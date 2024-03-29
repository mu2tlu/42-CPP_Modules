#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    {
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        
        delete j;
        delete i;
    }
    std::cout << "--------------------------" <<std::endl;
    {
        const int numAnimals = 4;
        AAnimal* animals[numAnimals];

        for (int i = 0; i < numAnimals / 2; ++i)
            animals[i] = new Dog();
    
        for (int i = numAnimals / 2; i < numAnimals; ++i)
            animals[i] = new Cat();
    
        for (int i = 0; i < numAnimals; ++i)
            animals[i]->makeSound();

        for (int i = 0; i < numAnimals; ++i)
            delete animals[i];
    }

    return 0;
}
