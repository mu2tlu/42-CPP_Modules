/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:51:38 by mumutlu           #+#    #+#             */
/*   Updated: 2024/02/08 09:00:31 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap();
		ScavTrap( const std::string& name );
		ScavTrap( const ScavTrap& );
		ScavTrap& operator=( const ScavTrap& );
		~ScavTrap();

		void attack( const std::string& target );
		void guardGate( void );

};


#endif
