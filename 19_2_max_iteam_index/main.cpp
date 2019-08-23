#include <iostream>
#include <random>

int randNumb()
{
 std::random_device rd;
 std::mt19937 mersenne(rd());

 return mersenne() % 10;
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

int *createArr(int size)
{
    int n[size];

    for (int i(0); i < size; i++)
    {
        n[i] = randNumb();
        std::cout << n[i] << ' ';
    }
    std::cout << '\n';

    return n;
}


int main()
{
    int size(0);
    std::cout << "Input size of array: ";
    std::cin >> size;

    int *n = createArr(size);

//    int n[size];

//    for (int i(0); i < size; i++)
//    {
//        n[i] = randNumb();
//        std::cout << n[i] << ' ';
//    }

    std::cout << max(n, n + size) << '\n';
    return 0;
}
