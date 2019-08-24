#include <iostream>

void convertion(int &day, int &mounth, int &year, int i)
{
    if (day < i)
    {
        day++;
    }
    else if (day == i)
    {
        day = 1;

        if (mounth < 12)
        {
            mounth++;
        }
        else if (mounth == 12)
        {
            mounth = 1;
            year++;
        }
        else
        {
            std::cout << " Your input is incorrect /n";

            day = 0;
            mounth = 0;
            year = 0;
        }
    }
    else
    {
        std::cout << " Your input is incorrect /n";

        day = 0;
        mounth = 0;
        year = 0;
    }


}

int main()
{
    int day(1);
    int mounth(1);
    int year(1);

    std::cin >> day >> mounth >> year;
    std::cout << '\n';

    int i(0);

    if (mounth == 1 || mounth == 3 || mounth == 5 || mounth == 7 || mounth == 8 || mounth == 10 || mounth == 12)
    {
        i = 31;
    }
    else if (mounth == 2)
    {
        if (year % 4 == 0)
        {
            i = 29;
        }
        else
        {
            i = 28;
        }
    }
    else
    {
        i = 30;
    }

    convertion(day, mounth, year, i);

    std::cout << "Next day : "<< day << ' ' << mounth << ' ' << year << '\n';
    return 0;
}
