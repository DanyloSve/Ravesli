#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::getline(std::cin, s);


    for (int i(s.size()); i != -1; i--)
    {
        std::cout << s[i];
    }

    std::cout <<'\n';

    return 0;
}
