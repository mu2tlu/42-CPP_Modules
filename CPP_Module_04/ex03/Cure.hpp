/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:57:39 by mumutlu           #+#    #+#             */
/*   Updated: 2024/03/10 14:57:40 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	
	public:
		Cure();
		~Cure();
		Cure( const Cure& );
		Cure& operator=( const Cure& );

		void use( ICharacter& target );
		AMateria* clone() const;

};

#endif
