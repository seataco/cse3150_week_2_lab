#include <iostream>
#include "../include/parser.h"

using std::string, std::cout, std::getline, std::endl;

namespace StringUtils{
    void parseName(const std::string& fullName, std::string* firstName, std::string* lastName){
        size_t space_pos = fullName.find(" ");
        if (space_pos == string::npos){
            cout << "Please reenter first and last name" << endl;
            return;
        }
        *firstName = fullName.substr(0, space_pos);
        *lastName = fullName.substr(space_pos + 1);

    }

    std::string getUsername(const std::string& email){
        size_t at_pos = email.find("@");
        string user_name = email.substr(0, at_pos);
        return user_name;

    }

}


