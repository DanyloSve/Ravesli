#include <iostream>
#include <vector>
#include <random>

int randNumb()
{
    std::random_device rd;
    std::mt19937 mersenne(rd());

    return mersenne() % 100;
}

int *min(int *p, int *q)
{
    int *minNumb = p;

    for (;p != q; ++p)
    {
        if (*minNumb > *p)
        {
           minNumb = p;
        }
    }

    return minNumb;
}


int *max(int *p, int *q)
{
   int *maxNumb = p;

   for (;p != q; ++p)
   {
       if (*maxNumb < *p)
       {
           maxNumb = p;
       }
   }

   return maxNumb;
}

void show (int *p, int *q)
{
    for(; p != q; p++)
    {
        std::cout << *p << ' ';
    }
}

void swap(int *a, int *b)
{
    int temp(*a);
    *a = *b;
    *b = temp;
}

int main()
{
    int m[9];


    for (int i(0); i < 9; i++)
    {
        m[i] = randNumb();
        std::cout << m[i] << ' ';
    }
    std::cout << "\n";

    swap(min(m, m + 9), max(m, m + 9));
    show(m, m + 9);

    std::cout << "\n";
    return 0;
}
