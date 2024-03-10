/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:57:22 by mumutlu           #+#    #+#             */
/*   Updated: 2024/03/10 14:57:23 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {

	private:
		std::string name;
		AMateria* 	inventory[4];

	public:
		Character();
		~Character();
		Character( const std::string& );
		Character( const Character& );
		Character& operator=( const Character& );

		const std::string& getName() const;

		void equip( AMateria* m );
		void unequip( int idx );
		void use( int idx, ICharacter& target );

};

#endif
