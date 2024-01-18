/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:48:00 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/18 19:21:12 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "constructor is called" << std::endl;
}

Zombie::Zombie(std::string zombieName) {
    setter(zombieName);
}

void Zombie::setter(std::string setName) {
    this->name = setName;
}

std::string Zombie::getter() {
    return(this->name);
}

void Zombie::announce(void) {
        std::cout << this->getter() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << "destructor is called" << std::endl;
}
