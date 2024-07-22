#pragma once

#include <iostream>
#include <vector>
#include <utility>

typedef std::vector<std::pair<std::string, double> > myMultiMap;
typedef std::vector<std::pair<std::string, double> >::iterator myMultiMapIt;

class BitcoinExchange
{
public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);

    myMultiMap readInput(const char* inputFile);
    void readData();
	void processInput(myMultiMap& iMap);
	size_t checkDate(std::string date);
	double exchangeBtc(std::string key, double amount);
    void processBtc(const char* file);
	void printMap(myMultiMap &map);
    void exitError(std::string error);

private:
    myMultiMap data;
};

