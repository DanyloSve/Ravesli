#include <iostream>

int sumOfNumb (int n, int sum)
{
    if(n == 0)
    {
        return sum;
    }
    sum += n;
    sumOfNumb(n - 2, sum);
}

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    std::cout << sumOfNumb(n * 2, 0) <<'\n';

    return 0;
}
