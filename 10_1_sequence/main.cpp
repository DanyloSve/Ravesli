#include <iostream>
#include <string>
#include <vector>

namespace mySpace
{

    void usrInfce()
    {

        double a(0);
        double sum(0);
        int count(0);
        while (std::cin >> a)
        {
            sum += a;
            count++;
        }
        std::cout << "Average : " << sum / count << '\n';
    }
}

int main(int argc, char *argv[])
{
    mySpace::usrInfce();
    return 0;
}
