/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:37:35 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/18 18:12:52 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

void ftMenu() {
    std::string result;
    Phonebook phone;

    while (1)
    {
        std::cout << "| ADD  |" << std::endl;
        std::cout << "|SEARCH|" << std::endl;
        std::cout << "| EXIT |" << std::endl;
        std::cout << std::endl;
        std::getline(std::cin, result);

        if (result == "EXIT")
            exit(1);
        else if (result == "ADD")
        {
            std::cout << std::endl;
            phone.add();
        }
        else if (result == "SEARCH")
        {
            std::cout << std::endl;
            phone.search();
        }
        else
            std::cout << std::endl << "Wrong arguments!!!\nTry Again\n" << std::endl;
    }
}

int main() {
    ftMenu();
    return 0;
}
