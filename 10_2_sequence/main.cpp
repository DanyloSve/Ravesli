#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char *argv[])
{
    std::string input;
    std::getline(std::cin, input);
    int numb[input.size()];

    std::stringstream convert(input);
    convert >> numb;

    return 0;
}
