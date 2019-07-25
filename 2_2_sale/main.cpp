#include <iostream>

int main(int argc, char *argv[])
{
    int smallSale (0);
    int bigSale (0);

    double price;
    std::cout << "Input price:\n";
    std::cin >> price;

    if (price < 500)
    {
       std::cout << "Price is :" << price <<' '<<"gryvnias\n";
    }

    else if (price >= 500 && price < 1000)
    {
        std::cout << "You have got 3% sale\n";
        std::cout << "Price with sale is :" << price * 97 / 100 <<' '<<"gryvnias\n";
    }

    else if (  price > 1000)
    {
        std::cout << "You have got 5% sale\n";
        std::cout << "Price with sale is :" << price * 95 / 100 <<' '<<"gryvnias\n";
    }

    return 0;
}
