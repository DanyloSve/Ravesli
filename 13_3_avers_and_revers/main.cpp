#include <iostream>

int getRandomNumber()
{
    //int min(1);
    //int max(2);

    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

    return static_cast<int>(rand() * fraction * (2) + 1);
}

int main()
{
    int avers(0);
    int reverse(0);
    int Throw = getRandomNumber();

    for (int i(1); i <= 100; i++)
    {
        Throw = getRandomNumber();
        if (rand() == 0)
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
