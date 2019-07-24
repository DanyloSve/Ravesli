#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string input;
    int i;
    while(true)
    {
    std::getline(std::cin, input);

    char min(input[0]);

        for (i = 0; i < input.size(); i++)
        {
            if (input[i] == ' ')
            {
                continue;
            }
            else if (input[i] == '-')
            {
               std::cout << "Numbers can not be negative! \n";
               std::cout << "Input one more time !\n";
               break;
            }
            else if (min > input [i])
            {
                min =  input[i];
            }
        }

        if (input[i] != '-')
        {
            std::cout << min <<' ';
            break;
        }
    }
    return 0;

}
