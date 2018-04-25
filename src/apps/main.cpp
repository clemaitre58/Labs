// "Copyright 2018 Sadiq

#include <iostream>
#include "titanic.h"
#include "data_info.h"

//  using namespace std;
//  ! NEVER USE instruction

void PrintData(lab3::Data data) {
	
	std::cout << "survived: " << data.survived_<< std::endl;
	std::cout << "pclass: "<< data.pclass_<< std::endl;
	std::cout << "sex: " << data.sex_<< std::endl;
	std::cout << "age: "<< data.age_ << std::endl;
	std::cout << "sibsp: "<< data.sibsp_ << std::endl;
	std::cout << "parch:"<< data.parch_ << std::endl;
	std::cout << "fare: "<< data.fare_ << std::endl;
	std::cout << "embarked: "<< data.embarked_ << std::endl;
	std::cout << "class: "<< data.class_<< std::endl;
	std::cout << "who: "<< data.who_<< std::endl;
	std::cout << "adultmale: "<< data.adultmale_ << std::endl;
	std::cout << "deck: "<< data.deck_ << std::endl;
	std::cout << "embarktown: "<< data.embarktown_ << std::endl;
	std::cout << "alive: "<< data.alive_ << std::endl;
	std::cout << "alone: "<< data.alone_ << std::endl;
}


int main()
{
	lab3::FileInformations file("../data/data.csv");
	for (int i=0; i<static_cast<int>(file.vec.size()); i++) {
		lab3::Data s = file.vec.at(i);
		PrintData(s);
	}
		
	return 0;
}
