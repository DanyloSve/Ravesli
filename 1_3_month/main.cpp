#include <iostream>

int main(int argc, char *argv[])
{
    int lMonth;
    std::cin >> lMonth;

            if (lMonth == 1 || lMonth == 2 || lMonth == 12)
            {
               std::cout << "Winter";
            }

            else if (lMonth >= 3 && lMonth <= 5)
            {
               std::cout << "Spring";
            }

            else if (lMonth >= 6 && lMonth <= 8)
            {
                std::cout << "Summer";
            }

            else if (lMonth >= 9 && lMonth <= 11)
            {
               std::cout << "Autumn";
            }

            else
            {
                std::cout << "Your input is not correct !";
            }

            std::cout<< '\n';
    return 0;
}
