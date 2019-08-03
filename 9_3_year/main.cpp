#include <iostream>
#include <sstream>


namespace mySpace
{
    struct UserInterface
    {
        static void input()
        {
            std::string yearStr;
            int yearNumber(0);
            std::getline(std::cin, yearStr);

            std::stringstream geek(yearStr);
            geek >> yearNumber;

            if (yearNumber % 4 == 0)
            {
              std::cout << "High year\n";
            }
            else
            {
                std::cout << "Low year\n" ;
            }

        }
    };
}
int main()
{
    mySpace::UserInterface::input();
    return 0;
}
