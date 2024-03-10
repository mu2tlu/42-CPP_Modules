/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:57:57 by mumutlu           #+#    #+#             */
/*   Updated: 2024/03/10 14:57:58 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE
# define IMATERIASOURCE

# include "AMateria.hpp"

class IMateriaSource {

	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria( AMateria* ) = 0;
		virtual AMateria* createMateria( const std::string& type ) = 0;
	
};

#endif
