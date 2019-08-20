#include <iostream>
#include <random>

int randNum()
{
    std::random_device rd;
    std::mt19937 mersenne(rd());

    int result = mersenne() % 10;

    if(result == 0)
    {
        return 1;
    }

    return result;
}

int main()
{
    int sum(0);

    std::cout << "Numbers : ";

    for (int i(0); i < 10; i++)
    {
        int n = randNum();
        std::cout << n << ' ';
        sum += n;
    }

    std::cout << '\n';
    std::cout <<"Average: " <<(double) sum / 10 << std::endl;

    return 0;
}
