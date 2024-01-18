/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:29:59 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/18 20:54:28 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << std::endl;
    std::cout << "string adress    : " << &brain << std::endl;
    std::cout << "stringptr adress : " << &stringPTR << std::endl;
    std::cout << "stringREF adress : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "string value     : " << brain << std::endl;
    std::cout << "stringptr value  : " << *stringPTR << std::endl;
    std::cout << "stringREF value  : " << stringREF << std::endl;
} 