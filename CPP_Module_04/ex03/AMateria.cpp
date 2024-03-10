/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:57:06 by mumutlu           #+#    #+#             */
/*   Updated: 2024/03/10 14:57:07 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::~AMateria() {
}

AMateria::AMateria( const std::string& type ) {
	this->type = type;
}

AMateria::AMateria( const AMateria& materia ) {
	*this = materia;
}

AMateria& AMateria::operator=( const AMateria& materia ) {
	if (this != &materia)
		this->type = materia.type;
	return *this;
}

const std::string& AMateria::getType() const {
	return this->type;
}

void AMateria::use( ICharacter& target ) {
	( void )target;
}
