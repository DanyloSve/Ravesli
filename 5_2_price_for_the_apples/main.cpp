#include <iostream>

int main()
{
    std::cout << "Input price for 1kg of apples:\n";
    double price;
    std::cin >> price;

    std::cout << "wage"  << '\t' << "price\n";

    for(int i(100); i < 1000; i+=100)
    {
        std::cout << i << ' ' << "g" << " = " << price / 1000 * i <<'\n';
    }

    return 0;
}
