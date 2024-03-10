/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:57:27 by mumutlu           #+#    #+#             */
/*   Updated: 2024/03/10 14:57:28 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	this->type = "cure";
}

Cure::~Cure() {
}

Cure::Cure( const Cure& cure ) {
	*this = cure;
}

Cure& Cure::operator=( const Cure& cure ) {
	if (this != &cure)
		this->type = cure.type;
	return *this;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}

AMateria* Cure::clone(void) const {
	return (new Cure(*this));
}

