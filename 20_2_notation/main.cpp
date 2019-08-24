#include <iostream>
#include <vector>


int main()
{
    std::cout << "Input a number : \n";
    int n;
    std::cin >> n;

    std::vector <int> v;

    int count(0);
    for (;;)
    {
        count++;
        if (n / 16 != 0 )
        {
            v.push_back(n % 16);
        }
        else
        {
            v.push_back(n % 16);
            break;
        }

        n /= 16;

    }

    for (int i(v.size() - 1); i != -1; i--)
    {
        if (v[i] > 9)
        {
            std::cout << static_cast<char>('A' + v[i] - 10);
        }
        else
        {
            std::cout << v[i];
        }
    }
    std::cout << '\n';

    return 0;
}
