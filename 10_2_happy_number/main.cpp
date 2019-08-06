#include <iostream>
#include <cmath>

namespace  mySpace
{
    void usrInfce()
    {
        std::cout << "Input number:\n";
        int numb;
        int n[6];
        std::cin >> numb; //(123 456)

        n[0] = trunc(numb / 100000);
        n[1] = trunc(numb / 10000) - n[0] * 10;
        n[2] = trunc(numb / 1000)- n[0] * 100 -  10 * n[1] ;
        n[3] = trunc(numb / 100) - n[0] * 1000 - n[1] * 100 - n[2] * 10;
        n[4] = trunc(numb / 10) - n[0] * 10000  - n[1] * 1000 - n[2] * 100- n[3] * 10;
        n[5] = numb - n[0] * 100000  - n[1] * 10000 - n[2] * 1000- n[3] * 100 - n[4] *10;

        int sum(0);
        for (int i(0), j(5);i < 3; i++, j--)
        {
           sum += n[i] - n[j];
        }

        (sum == 0)? (std::cout << "Happy number!\n"):(std::cout<< "Ordinary number\n");
    }
}

int main()
{
    mySpace::usrInfce();
    return 0;
}
