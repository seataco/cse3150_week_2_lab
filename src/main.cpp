#include <iostream>
#include <parser.h>


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

    test_parse();
    test_user();
    return 0;

}

