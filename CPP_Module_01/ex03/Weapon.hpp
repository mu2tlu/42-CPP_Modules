/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:59:30 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/19 19:56:24 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream> 

class Weapon {
private:
    std::string _type;
    
public:
    void setType(std::string setType);
    const std::string& getType() const;
    
    Weapon(std::string type);
};

#endif
