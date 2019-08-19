#include <iostream>

int *min (int *p, int *q)
{
    int *pmin = p;

    for(; p != q; ++p)
    {
        if (*p < *pmin)
        {
            pmin = p;
        }
    }

    return pmin;
}

void usrInfce()
{
    int m[5];
    std::cout << "Input array of 5 integers : ";
    for (int i(0); i < 5; i++)
    {
        std::cin >> m[i];
    }

    int *result = min(m, m + 5);

    std::cout <<"Minimum = " << *result << '\n';
}

int main()
{
    usrInfce();

    return 0;
}
