#include <iostream>

int main(int argc, char *argv[])
{
    int numb(0);
    std::cin >> numb;

    int result (0);
    int firstsum (0);

    int n[6];

    n[0] = numb / 100000;
    n[5] = numb % 10;

    n[4] = (numb % 100 - n[5]) / 10 ;
    n[3] = (numb % 1000 - numb % 100) / 100;
    n[2] = (numb % 10000 - numb % 1000) / 1000;
    n[1] = (numb % 100000 - numb % 10000) / 10000;

    for (int i(0), j(5); i != 3; i++, j--)
    {
        result += n[i] - n[j];
    }

    for (int i(0); i != 3; i++)
    {
        firstsum += n[i];
    }

    (result == 0 && firstsum == 13) ? (std::cout << true) : (std::cout << false);

    std::cout << '\n';
    return 0;
}
