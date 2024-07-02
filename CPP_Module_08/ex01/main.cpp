#include "Span.hpp"
#include <iostream>

int main()
{
	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		Span sp = Span(7);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(111);
		sp.addNumber(115);
		sp.addNumber(111);
		sp.addNumber(113);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
	}
	
	try {
		
        size_t len = 10000;
        std::vector<int> nums;
        srand(time(0));
        for (size_t i = 0; i < len; ++i) {
            nums.push_back(rand());
        }
        Span sp = Span(len);
        sp.fill(nums.begin(), nums.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
	}
}
