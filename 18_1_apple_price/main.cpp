#include <iostream>
#include <cmath>

int main()
{
    double applePrice(0);
    std::cout << "Price for 1 kg of apples: ";
    std::cin >> applePrice;

    double weight(0);
    std::cout << "Weight of apples: ";
    std::cin >> weight;

    int kg;
    double gram;

    kg = trunc(weight);
    gram = weight - kg;

    std::cout << "Value: " << kg * applePrice + gram * applePrice <<'\n';
    return 0;
}
