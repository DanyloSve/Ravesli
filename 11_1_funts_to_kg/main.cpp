#include <iostream>

namespace mySpace
{
    void usrInfce()
    {
        double funts(0);
        std::cout << "Input funts:\n";
        std::cin >> funts;
        std::cout << funts << " funts = " << funts / 2.2046 <<"kg";
    }
}

int main()
{
    mySpace::usrInfce();

    return 0;
}
