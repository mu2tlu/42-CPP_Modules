/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:57:43 by mumutlu           #+#    #+#             */
/*   Updated: 2024/03/10 14:57:44 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	this->type = "ice";
}

Ice::~Ice() {
}

Ice::Ice( const Ice& ice) {
	*this = ice;
}

Ice& Ice::operator=(const Ice& ice) {
	if (this != &ice)
		this->type = ice.getType();
	return *this;
}

void Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName()
			  << " *" << std::endl;
}

AMateria* Ice::clone(void) const {
	return (new Ice(*this));
}
