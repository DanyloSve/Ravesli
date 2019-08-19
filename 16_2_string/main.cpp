#include <iostream>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    s[0] = ' ';

    s[s.size() - 1] = '.';
    std::cout << s << '\n';
    return 0;
}
