#include <iostream>

int getRandomNumber()
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

    return static_cast<int>(rand() * fraction * (2) + 0);
}

int main()
{
    int avers(0);
    int reverse(0);

    int Throw = getRandomNumber();

    for (int i(1); i != 101; i++)
    {
        Throw = getRandomNumber();

        if (Throw == 0)
        {
            avers ++;
        }
        else
        {
            reverse ++;
        }
    }

    std::cout << "Avers   : " << avers << '\n';
    std::cout << "Reverse : " << reverse << '\n';

    return 0;
}
