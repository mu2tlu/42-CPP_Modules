/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:57:48 by mumutlu           #+#    #+#             */
/*   Updated: 2024/03/10 14:57:49 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

	public:
		Ice();
		~Ice();
		Ice( const Ice& );
		Ice& operator=( const Ice& );

		void use( ICharacter& target );
		AMateria* clone() const;

};

#endif
