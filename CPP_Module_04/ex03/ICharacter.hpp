/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:57:53 by mumutlu           #+#    #+#             */
/*   Updated: 2024/03/10 14:57:54 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter {

	public:
		virtual ~ICharacter() {}
		virtual const std::string& getName() const = 0;
		virtual void equip( AMateria* m ) = 0;
		virtual void unequip( int idx ) = 0;
		virtual void use( int idx, ICharacter& target ) = 0;

};

#endif
