#include <iostream>

int main(int argc, char *argv[])
{
    int length (0);
    int lpk (0);
    int price (0);

    std::cout << "Input length in km:\n";
    std::cin >> length;

    std::cout << "Input liters of fuel per kilometer:\n";
    std::cin >> lpk;

    std::cout << "Input price of:\n";
    std::cin >> price;

    std::cout << "The trip to the dacha and back will cost:\n";
    std::cout << length * lpk * price <<"gryvnias" <<'\n';

    return 0;
}
