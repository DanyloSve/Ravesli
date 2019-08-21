#include <iostream>
#include <random>
#include <vector>

int randNumb()
{
    std::random_device rd;
    std::mt19937 mersenne (rd());

    return mersenne() % 10;
}

bool isNew(std::vector <int> &v, int n)
{
    for(int i(0); i < v.size(); i++)
    {
        if (n == v[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int a[15];
    std::vector <int> v;

    std::cout << "Array:     ";
    for (int i(0); i < 15; i++)
    {
        a[i] = randNumb();
        std::cout << a[i] << ' ';

    }

    for (int i(0); i != 15; i++)
    {
        if (isNew(v, a[i]))
        {
            v.push_back(a[i]);
        }

    }

    std::cout << '\n';

    std::cout << "New array: ";
    for (int i(0); i < v.size(); i++)
    {
        std::cout << v[i] << ' ';
    }
    return 0;
}
