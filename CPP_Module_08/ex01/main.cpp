#include "Span.hpp"
#include <cstdlib>

int main()
{
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        sp.print();

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    {
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
    return 0;
}
