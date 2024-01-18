/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:37:18 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/18 18:20:17 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
Contact::Contact(){  
};
Contact::~Contact(){
};

Contact::Contact(std::string name, std::string surname, std::string userName, std::string phoneNumber, std::string secret) {  
    this->name = name;
    this->surname = surname;
    this->userName = userName;
    this->phoneNumber = phoneNumber;
    this->secret = secret;
}

std::string Contact::getContact() {
    return "|" + tenCharacters(this->name) + "|" + tenCharacters(this->surname) + "|" + tenCharacters(this->userName) + "|";
}

std::string Contact::tenCharacters(std::string value) {
    int i;
    std::string str;

    if (value.length() <= 10)
    {
        for (i = 0; i < 10 - (int)value.length(); i++)
            str += ' ';
        for (i = 0; i < (int)value.length(); i++)
            str += value[i];
    }
    else
    {
        for (i = 0; i < 9; i++)
            str += value[i];
        str += '.';
    }
    return str;
}

void Contact::printContact() {
    std::cout << "Name:         " + this->name + "\nSurname:      " + this->surname + "\nUser Name:    " + this->userName << std::endl;
    std::cout << "Phone Number: " + this->phoneNumber + "\nSecret:       " + this->secret << std::endl << std::endl;
}
