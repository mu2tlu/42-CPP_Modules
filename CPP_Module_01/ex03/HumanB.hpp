/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:58:46 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/25 15:40:23 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    std::string _nameB;
    Weapon* _weapon;
    
public:
    void setWeapon(Weapon& weapon);
    
    void attack(void);
    
    HumanB(std::string name);
    ~HumanB();
};

#endif
