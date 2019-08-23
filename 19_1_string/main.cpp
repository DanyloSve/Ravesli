#include <iostream>
#include <string>

int main()
{
    std::string input;
    getline(std::cin, input);

     for (int i(0); i < input.length(); i++)
     {
         if ( (input[i] >= 'a') && (input[i] <= 'z') || (input[i] >= 'A') && (input[i] <= 'Z') )
         {
             std::cout << input[i];
         }
     }

    std::cout << '\n';
    return 0;
}
