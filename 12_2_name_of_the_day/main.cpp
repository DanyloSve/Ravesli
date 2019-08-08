#include <iostream>

int main()
{
        int dayNumb(1);
        std::cout << "Input a day (1 - 360)\n";

        std::cin >> dayNumb;

        int day(1);
        for (int i(2); i != dayNumb + 1 ; i++)
        {
            day++;
            if (day == 8)
            {
              day = 1;
            }
        }

        switch (day)
        {
        case 1: std::cout << "Monday\n";
            break;
        case 2: std::cout << "Tuesday\n";
            break;
        case 3: std::cout << "Wednesday\n";
            break;
        case 4: std::cout << "Thursday\n";
            break;
        case 5: std::cout << "Friday\n";
            break;
        case 6: std::cout << "Saturday\n";
            break;
        case 7: std::cout << "Sunday\n";
            break;




    }
    return 0;
}
