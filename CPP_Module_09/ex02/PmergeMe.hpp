#pragma once

#include <iostream>
#include <list>
#include <deque>
#include <sys/time.h>

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(std::list<int> inputList, std::deque<int> inputDeque);
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);

		size_t isInt(char *s);
		void exitError();
		void takeArgs(int argCount, char **argValues);
		void mergeMe(int argCount, char **argValues);
		void printTime(timeval startTime, timeval endTime, std::string type);

		template<typename T>
		void mergeInsert(T& array, int start, int end);
		template<typename T>
		void insertionSort(T& array, int start, int end);

	private:
		std::list<int> list;
		std::deque<int> deque;
		size_t size;
};
