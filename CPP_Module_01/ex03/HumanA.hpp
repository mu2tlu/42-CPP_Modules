/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:00:04 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/22 16:25:37 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
    std::string _nameA;
    Weapon& _weapon;
    
public:
    void attack(void);
    
    HumanA(std::string name, Weapon& weapons);
    ~HumanA();
};

#endif
