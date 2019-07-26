#include <iostream>
#include <cmath>
int main(int argc, char *argv[])
{
    double length(0);
    double time(0);

    std::cout << "Input length in meters\n";
    std::cin >> length;

    std::cout << "Input time in minutes (min.sec)\n";
    std::cin >> time;

    double min = trunc(time);
    double sec = time - min;

    sec = sec * 100 + min * 60;

    std::cout << "You was running with the speed of " << length * 3.6 /  sec << "km per h\n";


    return 0;
}
