#include "Span.hpp"
#include <stdexcept>
#include <iostream>
#include <algorithm>

Span::Span() {}

Span::Span(unsigned int N): maxSize(N) { vec.reserve(N); }

Span::~Span() {}

Span::Span(const Span& other) { *this = other; }

Span &Span::operator=(const Span& other)
{
    vec = other.vec;
    maxSize = other.maxSize;
    return *this;
}

void Span::addNumber(int num)
{
    if (vec.size() >= maxSize)
        throw std::out_of_range("Span is full");
    vec.push_back(num);
}

int Span::shortestSpan()
{
    if (maxSize <= 1)
        throw std::logic_error("Cannot find span with less than two number");
    std::vector<int> tmp = vec;
    std::sort(tmp.begin(), tmp.end());
    int span = tmp[1] - tmp[0];
    int dist = span;
    for (size_t i = 2; i < tmp.size(); ++i) {
        dist = tmp[i] - tmp[i -1];
        if (dist < span)
            span = dist;
    }
    return span;
}

int Span::longestSpan()
{
    if (maxSize <= 1)
        throw std::logic_error("Cannot find span with less than two number");
    return *std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end());
}

void Span::fill(iter begin, iter end)
{
    iter it;
    for (it = begin; it != end; ++it) {
        this->addNumber(*it);
    }
}

void Span::print()
{
    iter it;

    for (it = vec.begin(); it != vec.end(); it++) {
        std::cout << *it << std::endl;
    }
}