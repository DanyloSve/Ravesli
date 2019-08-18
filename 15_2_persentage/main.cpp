#include <iostream>

void usrInfce()
{
    double money(0.0);
    std::cout << "Input number of money: ";
    std::cin >> money;

    double persentage(0);
    std::cout << "Persentage: ";
    std::cin >> persentage;

    int sYear(0);
    std::cout << "Start year: ";
    std::cin >> sYear;

    int eYear(0);
    std::cout << "End year: ";
    std::cin >> eYear;


    for(int i(0); i < (eYear - sYear + 1); i++)
    {
        money *= (1 + persentage / 100);
    }

    std::cout << money;

}
int main()
{
    usrInfce();
    return 0;
}
