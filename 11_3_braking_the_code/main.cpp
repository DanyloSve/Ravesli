#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Enter the code:\n";
    int code(0);
    std::cin >> code;

    int ones(code % 10);
    int hundrets(code / 100);
    int dec = (code - ones - hundrets * 100) / 10;

    int count(0);

    for (int i(0); i < 10; i++)
    {
        for (int j(0); j < 10; j++)
        {
            for (int k(0); k < 10; k++)
            {
                if ( k == ones && j == dec && i ==  hundrets)
                {
                    break;
                }

                count ++;
            }
        }
    }

    std::cout << "It takes " << count << " conmbinations to break the code\n";

    return 0;
}
