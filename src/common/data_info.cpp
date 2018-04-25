// "Copyright 2018 Sadiq
#include <iostream>
#include "data_info.h"


// using namespace std;
// cf main

namespace lab3 {
FileInformations::FileInformations(std::string filepath) {
	std::ifstream  File(filepath.c_str());
	std::string lineinformation = ""; 
	int linenumber = 0;
    int linenumbersought;
	std::cout << "enter line number: ";
	std::cin >> linenumbersought;
	std:: cout << std::endl << std::endl;
    if (File.is_open()) {
        while ((getline(File, lineinformation) && (!File.eof()))) {
            linenumber++;          
            if(linenumber == linenumbersought) {
				lab3::Data s(lineinformation);
                vec.push_back(s);
			}  //  linenumber == linenumbersought
		}  //   ((getline(File, lineinformation) && (!File.eof())))
	}  //  if file is open
	 File.close();
}  //  FileInformations::FileInformations 
}  //  namespacelab3	
