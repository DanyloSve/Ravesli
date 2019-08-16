#include <iostream>
#include <cmath>

int main()
{
    int time(0);
    std::cin >> time;

    std::cout << 1 + 2*(pow(2, time) - 1) << '\n';
    return 0;
}
