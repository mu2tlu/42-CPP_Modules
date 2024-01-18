/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:37:46 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/18 18:20:50 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook() {
    number = 0;
    full = false;
}

Phonebook::~Phonebook() {
};

void Phonebook::add() {
    std::string input;
    std::string name, surname, userName, phoneNumber, secret;
    std::cout << "Name: ";
    std::getline(std::cin, name);
    std::cout << "Surname: ";
    std::getline(std::cin, surname);
    std::cout << "Username: ";
    std::getline(std::cin, userName);
    std::cout << "Phone Number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Secret: ";
    std::getline(std::cin, secret);
    std::cout << std::endl;

    if (number == 8)
    {
        number = 0;
        full = true;
    }

    book[number] = Contact(name, surname, userName, phoneNumber, secret);
    number++;
}

void Phonebook::search() {
    std::string search;

    std::cout << "| Directory|      Name|   Surname| Nick Name|" << std::endl;
    if (full)
        for(int i = 0; i < 8; i++)
            std::cout << "|         " << i + 1 << book[i].getContact() << std::endl;
    else
        for(int i = 0; i < number; i++)
            std::cout << "|         " << i + 1 << book[i].getContact() << std::endl;
    
    std::cout << std::endl;
    std::cout << "Search: ";
    std::getline(std::cin, search);
    std::cout << std::endl;

    if (search[0] < '1' || search[0] > '9')
        std::cout << "Error\n" << std::endl;
    else if (search.length() > 1 || ((!full && search[0] - 48 > number) || (full && search[0] - 48 > 8)))
        std::cout << "Error\n" << std::endl;
    else
        book[search[0] - 48 - 1].printContact();
}
