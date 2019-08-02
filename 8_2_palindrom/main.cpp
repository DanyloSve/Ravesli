#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;

    int check(0);
    int size = str.size() - 1;

    for (int i(0); i < str.size() / 2 ; i ++)
    {
        check = str[i] - str[size--];
    }
    (check == 0) ? (std::cout << true) : (std::cout << false);
    std::cout <<'\n';
    return 0;
}
