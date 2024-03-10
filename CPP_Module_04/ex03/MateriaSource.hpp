/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:58:22 by mumutlu           #+#    #+#             */
/*   Updated: 2024/03/10 14:58:23 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:
		AMateria* learnedMaterias[4];

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource( const MateriaSource& );
		MateriaSource& operator=( const MateriaSource& );

		void learnMateria( AMateria* );
		AMateria* createMateria( const std::string& type );

};

#endif
