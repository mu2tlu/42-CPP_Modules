#include "PmergeMe.hpp"
#include <cstdlib>
#include <cstring>

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(std::list<int> _list, std::deque<int> _deque) : list(_list), deque(_deque) {}

PmergeMe::PmergeMe(const PmergeMe& other) { *this = other; }

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	list = other.list;
	deque = other.deque;
	return *this;
}

void PmergeMe::exitError()
{
	std::cout << "Error" << std::endl;
	exit(1);
}

size_t PmergeMe::isInt(char *s)
{
	for (size_t i = 0; i < strlen(s); ++i) {
		if (!isdigit(s[i]))
			return 0;
	}
	return 1;
}

void PmergeMe::takeArgs(int ac, char** av)
{
	int n;
	for (int i = 1; i < ac; ++i) {
		n = atoi(av[i]);
		if (!isInt(av[i]) || n < 0)
			exitError();
		list.push_back(n);
		deque.push_back(n);
	}
	std::cout << "Before:  ";
	for (int i = 1; i < ac; ++i) {
		if (ac >= 7 && i == 5)
		{
			std::cout << "[...]";
			break;
		}
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;
	size = ac - 1;
}

template<typename T>
void PmergeMe::insertionSort(T& array, int start, int end)
{
	typename T::iterator startIter = array.begin();
	typename T::iterator endIter = array.begin();
	std::advance(startIter, start);
	std::advance(endIter, end + 1);

	for (typename T::iterator currentIter = startIter; currentIter != endIter; ++currentIter)
	{
		typename T::iterator innerIter = currentIter;
		int tempValue = *currentIter;
		typename T::iterator prevIter = currentIter;

		while (prevIter != startIter && *(--prevIter) > tempValue)
		{
			*innerIter = *prevIter;
			innerIter = prevIter;
		}

		*innerIter = tempValue;
	}
}

template<typename T>
void merge(T& array, int start, int mid, int end)
{
	T leftSubarray;
	T rightSubarray;

	typename T::iterator arrayIter = array.begin();
	std::advance(arrayIter, start);
	for (int i = start; i <= mid; ++i) {
		leftSubarray.push_back(*arrayIter);
		++arrayIter;
	}

	arrayIter = array.begin();
	std::advance(arrayIter, mid + 1);
	for (int i = mid + 1; i <= end; ++i) {
		rightSubarray.push_back(*arrayIter);
		++arrayIter;
	}

	typename T::iterator leftIter = leftSubarray.begin();
	typename T::iterator rightIter = rightSubarray.begin();
	typename T::iterator mergedIter = array.begin();
	std::advance(mergedIter, start);

	while (leftIter != leftSubarray.end() && rightIter != rightSubarray.end())
	{
		if (*leftIter <= *rightIter) {
			*mergedIter = *leftIter;
			++leftIter;
		} else {
			*mergedIter = *rightIter;
			++rightIter;
		}
		++mergedIter;
	}

	while (leftIter != leftSubarray.end()) {
		*mergedIter = *leftIter;
		++leftIter;
		++mergedIter;
	}

	while (rightIter != rightSubarray.end()) {
		*mergedIter = *rightIter;
		++rightIter;
		++mergedIter;
	}
}

template<typename T>
void PmergeMe::mergeInsert(T& array, int start, int end)
{
	if (end - start > 3)
	{
		int mid = (start + end) / 2;
		mergeInsert(array, start, mid);
		mergeInsert(array, mid + 1, end);
		merge(array, start, mid, end);
	}
	else
		insertionSort(array, start, end);
}

void PmergeMe::printTime(timeval startTime, timeval endTime, std::string type)
{
	long timePassedMicroseconds = ((endTime.tv_sec - startTime.tv_sec) * 1000000L) + (endTime.tv_usec - startTime.tv_usec);
	std::cout << "Time to process a range of " << size <<  " elements with "
	<< type << " " << std::fixed << timePassedMicroseconds << " us." << std::endl;
}

void PmergeMe::mergeMe(int ac, char **av)
{
	takeArgs(ac, av);
	struct timeval tv1, tv2;

	gettimeofday(&tv1, 0);
    mergeInsert(list, 0, list.size() - 1);
	gettimeofday(&tv2, 0);
	std::cout << "After:  ";
	int i = 0;
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it) {
		if (ac >= 7 && i == 4)
		{
			std::cout << "[...]";;
			break ;
		}
		std::cout << *it << " ";
		++i;
	}
	std::cout << std::endl;
	printTime(tv1, tv2, "std::list");
	gettimeofday(&tv1, 0);
    mergeInsert(deque, 0, deque.size() - 1);
	gettimeofday(&tv2, 0);
	printTime(tv1, tv2, "std::deque");
}
