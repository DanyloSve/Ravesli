#include <iostream>

int main()
{
    std::cout << "Input time in minutes:\n";
    int minutes;
    std::cin >> minutes;
    std::cout << "Hours :"<< ' ' << minutes / 60 << '\n';
    std::cout << "Minutes :"<< ' ' << minutes % 60 << '\n';

    return 0;
}
