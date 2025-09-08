#include <iostream>
#include <parser.h>


void test_parse() {
    std::string full_name = "John Doe";
    std::string firstName = "";
    std::string lastName = "";

    StringUtils::parseName(full_name, &firstName, &lastName);

    std::cout << lastName << " ------ " << firstName << std::endl;
}

int main() {

    test_parse();
    return 0;

}

