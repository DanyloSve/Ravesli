#include <iostream>

int f(int h, int m, int s)
{
    return h * 3600 + m * 60 + s;
}

void usrIntfce()
{
    int h, m, s;
    std::cout << "Input time: \n";
    std::cout << "hours: \n";
    std::cin >> h;

    std::cout << "minutes: \n";
    std::cin >> m;

    std::cout << "secunds: \n";
    std::cin >> s;

    std::cout << "time in secunds: " << f(h, m, s);
    std::cout << "\n";
}

int main()
{
    usrIntfce();
    return 0;
}
