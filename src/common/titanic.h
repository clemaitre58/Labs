//  Copyright 2018 Sadiq

#ifndef TITANIC_H_
#define TITANIC_H_

#include <string>
#include <vector>
#include <sstream>
#include <fstream>

namespace lab3 {
template <class Type>
Type stringToNum(const std::string & str) {
	
	std::istringstream iss(str);
	Type num;
	iss>>num;
	return num;
}

class Data
{
	
  public:

	bool survived_;
	int pclass_;
	bool sex_;
	float age_;
	int sibsp_;
	int parch_;
	float fare_;
	std::string embarked_;
	std::string class_;
	std::string who_;
	bool adultmale_;
	std::string deck_;
	std::string embarktown_;
	bool alive_;
	bool alone_;
	
	Data(std::string fileinformation);
	
	
};
}
#endif // TITANIC_H_
