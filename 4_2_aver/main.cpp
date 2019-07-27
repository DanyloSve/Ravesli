#include <iostream>
#include <vector>

double aver(double *a, int n)
{
    double sum(0);

    while(*a != '\0')
    {
        sum += *a;
        *a++;
    }

    return sum / n;
}

double *min(double *a, int &n)
{
    double *min = a;
    while (*a++ != '\0')
    {
        if (*a < *min)
        {
            min = a;
        }
    }
    return min;
}

double max(double *a, int &n)
{
    double max = a[0];
    for (int i(0); i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}


int main()
{
    int n;
    std::cin >> n;
    double a[n];

    for (int i(0); i < n; i++)
    {
        std::cin >> a[i];
    }

    std::cout << "Number of iteams: " << n <<'\n';
    std::cout << "Average: " << ' ' << aver(a, n) <<'\n';
    std::cout << "Min iteam : " << *min(a, n) << '\n';
    std::cout << "Max iteam : " << max(a, n) << '\n';

    return 0;
}
