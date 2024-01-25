/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:35:42 by mumutlu           #+#    #+#             */
/*   Updated: 2024/01/25 18:43:18 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replaceString(std::string source, std::string search, std::string replace) {
    std::string result;
    size_t startPos = 0;
    size_t foundPos = source.find(search);

    while (foundPos != std::string::npos) {
        result += source.substr(startPos, foundPos - startPos) + replace;
        startPos = foundPos + search.length();
        foundPos = source.find(search, startPos);
    }
    result += source.substr(startPos);
    return (result);
}

int main(int argc, char* argv[]) {
    if(argc != 4) {
        std::cout << "Invalid number of arguments. Usage: program.exe filename s1 s2." << std::endl;
        return 1;
    }
    std::string fileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream inputFile(fileName);
    if (!inputFile) {
        std::cout << "The source file could not be opened." << std::endl;
        return (1);
    }
    std::string content;
    std::string line;
    while(std::getline(inputFile, line)) {
        content += line + "\n";
    }
    inputFile.close();

    std::string replacedContent = replaceString(content, s1, s2);
    std::ofstream outputFile(fileName + ".replace");
    if (!outputFile) {
        std::cout << "The destination file could not be created." << std::endl;
        return (1);
    }
    outputFile << replacedContent;
    outputFile.close();
    std::cout <<  "The file has been copied and modifications have been made." << std::endl;
    return (0);
}
