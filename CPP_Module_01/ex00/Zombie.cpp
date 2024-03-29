/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:22:26 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/18 19:47:36 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setter(std::string setName) {    
    this->name = setName;
}

std::string Zombie::getter(void) {    
    return (this->name);
}

void Zombie::announce(void) {
    std::cout << Zombie::getter() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Destructor is called" << std::endl;
}