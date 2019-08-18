#include <iostream>
#include <string>

int main()
{
    std::string s;

    std::cout << "Input a string:\n";
    std::cin >> s;

    int i(0);

    while (s[i] != '\0')
    {
        i++;
    }

    std::cout << "String size: " << i << '\n';
    return 0;
}
