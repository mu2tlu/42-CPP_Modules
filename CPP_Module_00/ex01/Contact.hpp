/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:33:31 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/18 18:12:55 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
private:
    std::string tenCharacters(std::string value);
    std::string name;
    std::string surname;
    std::string userName;
    std::string phoneNumber;
    std::string secret;

public:
    Contact();
    Contact(std::string name, std::string surname, std::string userName, std::string phoneNumber, std::string secret);
    ~Contact();
    std::string getContact();
    void printContact();
};

#endif