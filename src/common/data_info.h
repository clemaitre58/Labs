//  Copyright 2018 Sadiq

#ifndef DATA_INFO_H_
#define DATA_INFO_H_

#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include "titanic.h"
#include <iterator>
#include <algorithm>
#include <iostream>


namespace lab3 {
class FileInformations {
	
  public:
	FileInformations(std::string filepath);
	
	std::vector<Data> vec;



};
}
#endif // DATA_INFO_H_
