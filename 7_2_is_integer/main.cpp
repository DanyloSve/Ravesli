#include <iostream>

bool isInteger()
{
    char lCharacter;

    while (std::cin.get(lCharacter) && lCharacter != '\n')
    {
        if (lCharacter == '.' || lCharacter == ',')
        {
            return false;
        }

    }

    return true;
}

int main()
{
    isInteger() ? (std::cout << "Number is integer\n") : (std::cout << "Number is not integer!\n");
    return 0;
}
