#include <iostream>
#include <parser.h>


using std::cin, std::cout, std::string, std::endl, std::getline;

void test_parse() {
    std::string full_name = "John Doe";
    std::string firstName = "";
    std::string lastName = "";

    StringUtils::parseName(full_name, &firstName, &lastName);

    std::cout << lastName << " ------ " << firstName << std::endl;
}

void test_user() {
    std::string email = "johndoe123@uconn.edu";
    std::string user = "";

    user = StringUtils::getUsername(email);
    std::cout << user << std::endl;

}

int main() {

    string full_name = "";
    string email = "";

    cout << "Please enter your full name (first and last) on one line, then your email address on the next line:" << endl;
    getline(cin, full_name);
    //cout << "Please enter your email address:" << endl;
    getline(cin, email);

    string* firstName = new string;
    string* lastName = new string;
    std::string user = "";

    StringUtils::parseName(full_name, firstName, lastName);
    user = StringUtils::getUsername(email);

    cout << "First Name: " << *firstName << endl;
    cout << "Last Name: " << *lastName << endl;
    cout << "Username: " << user << endl;


    delete firstName;
    delete lastName;
    return 0;

}

