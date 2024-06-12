#include <iostream>
#include "Array.hpp"

int main() {

	int max_value = 10;
    Array<int> arr(max_value);

    for (int i = 0; i < max_value; ++i) {
        arr[i] = i;
    }

    std::cout << "Array elements: ";
    for (int i = 0; i < max_value; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    try {
		arr[0] = 100;
		std::cout << "Array elements: ";
		for (int i = 0; i < max_value; ++i) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;

	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << arr[max_value] << std::endl;

	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// Test case for Array class with characters
	std:: cout << std::endl;

	Array<char> charArray(max_value);
    for (int i = 0; i < max_value; ++i) {
        charArray[i] = 'A' + i;
    }
	
	std::cout << "Array elements: ";
    for (int i = 0; i < max_value; ++i) {
        std::cout << charArray[i] << " ";
    }
    std::cout << std::endl;

	try {
		charArray[0] = 'Z';
		std::cout << "Array elements: ";
		for (int i = 0; i < max_value; ++i) {
			std::cout << charArray[i] << " ";
		}
		std::cout << std::endl;

	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	

	try {
		charArray[max_value] = 'F'; 
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}