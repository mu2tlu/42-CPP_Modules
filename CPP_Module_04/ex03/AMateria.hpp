/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:57:12 by mumutlu           #+#    #+#             */
/*   Updated: 2024/03/10 14:57:13 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria {

	protected:
		std::string type;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria( const AMateria& );
		AMateria( const std::string& );
		AMateria& operator=( const AMateria& );

		const std::string& getType() const;

		virtual void use( ICharacter& target );

		virtual AMateria* clone() const = 0;

};

#endif
