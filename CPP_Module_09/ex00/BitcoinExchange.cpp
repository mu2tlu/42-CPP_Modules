#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) { *this = other; }

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) { (void)other; return *this; }

void BitcoinExchange::exitError(std::string error)
{
    std::cout << "Error: " << error << std::endl;
    exit(1);
}

void BitcoinExchange::printMap(myMultiMap &map)
{
    myMultiMapIt it;
	for (it = map.begin(); it != map.end(); ++it) {
		std::cout << it->first << ": " << it->second << std::endl;
	}
}

void BitcoinExchange::readData()
{
    std::ifstream dataFile("data.csv");
    if (!dataFile)
        exitError("could not read data file.");

    std::string line;
    getline(dataFile, line);
    while (getline(dataFile, line))
    {
        std::istringstream strIn(line);
        std::string date, value;
        getline(strIn, date, ',');
        getline(strIn, value);
		data.push_back(std::make_pair(date, atof(value.c_str())));
    }
    dataFile.close();
}

myMultiMap BitcoinExchange::readInput(const char* inputFile)
{
    std::ifstream inFileStream(inputFile);
    if (!inFileStream)
        exitError("could not open input file.");

    myMultiMap iMap;
    std::string line, key, value;
    for (size_t i = 0; getline(inFileStream, line); ++i) {
        std::istringstream inStringStream(line);
        getline(inStringStream, key, '|');
        getline(inStringStream, value);
        // erase space 3 character for comparison
        key.erase(0, key.find_first_not_of("  \t\n\r\f\v"));
        key.erase(key.find_last_not_of("  \t\n\r\f\v") + 1);
        value.erase(0, value.find_first_not_of("  \t\n\r\f\v"));
        value.erase(value.find_last_not_of("  \t\n\r\f\v") + 1);
        if (i == 0)
        {
            if (key != "date" && value != "value")
                exitError("invalid file format.");
            continue;
        }
		iMap.push_back(std::make_pair(key, atof(value.c_str())));
        key.clear();
        value.clear();
    }

    inFileStream.close();
    return iMap;
}

size_t BitcoinExchange::checkDate(std::string date)
{
    if (date.size() != 10)
        return 0;
    std::istringstream dateStream(date);
    std::string strYear, strMonth, strDay;
    int year, month, day;
    getline(dateStream, strYear, '-');
    year = atoi(strYear.c_str());
    if (year < 2009 || year > 2023)
        return 0;
    getline(dateStream, strMonth, '-');
    month = atoi(strMonth.c_str());
    if (month < 1 || month > 12)
        return 0;
    getline(dateStream, strDay);
    day = atoi(strDay.c_str());

	    // Check for correct number of days in each month
    if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if (day < 1 || day > 29)
                return 0;
        } else {
            if (day < 1 || day > 28)
                return 0;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 1 || day > 30)
            return 0;
    } else {
        if (day < 1 || day > 31)
            return 0;
    }
    if ((day < 1 || day > 31) || (year == 2009 && month == 1 && day < 2))
        return 0;
    return 1;
}

double BitcoinExchange::exchangeBtc(std::string key, double amount)
{
    myMultiMapIt it;
    myMultiMapIt prev = data.begin();

    for (it = data.begin(); it != data.end(); ++it) {
        if (it->first >= key)
        {
            if (key == it->first)
                return (amount * it->second);
            else
                return (amount * prev->second);
        }
        prev = it;
    }
    return 0;
}

void BitcoinExchange::processInput(myMultiMap& iMap)
{
    myMultiMapIt it;
	for (it = iMap.begin(); it != iMap.end(); ++it) {
		if (checkDate(it->first))
		{
			if (it->second == std::string::npos)
				std::cout << "Error: there is no value or value is not a number." << std::endl;
			else if (it->second > 1000)
				std::cout << "Error: too large a number." << std::endl;
			else if (it->second < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else
				std::cout << it->first << " => " << it->second << " = " <<
				exchangeBtc(it->first, it->second) << std::endl;
		}
		else
			std::cout << "Error: bad input => " << it->first << std::endl;
	}
}

void BitcoinExchange::processBtc(const char* inputFile)
{
    readData();
    myMultiMap iMap = readInput(inputFile);
    processInput(iMap);
}