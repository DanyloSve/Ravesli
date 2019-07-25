#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char *argv[])
{
    while (true)
    {

        srand (time(0));

        int numb = rand() % 1000;

        int a [3];
        int b [3];

        a[2] = numb / 100;
        a[1] = (numb - a[2] * 100) / 10;
        a[0] = numb - a[2] * 100 - a[1] * 10;

         while (true)
        {
            int inTheRightPlace(0);
            int matching(0);
            int input;
            std::cout <<"Enter you number:\n";
            std::cin >> input;

            b[2] = input / 100;
            b[1] = (input - b[2] * 100) / 10;
            b[0] = input - b[2] * 100 - b[1] * 10;

            for (int i(0); i < 3; i++)
            {
                if (b[i] == a[i])
                {
                    inTheRightPlace++;
                }

                for (int j(0); j < 3; j++)
                {
                    if (b[i] == a[j])
                    {
                        matching++;
                    }
                }
            }

            std::cout <<"Matching: " << matching <<'\n';
            std::cout <<"In the correct order :" << inTheRightPlace<<'\n';

            if (a[0]  == b[0] && a[1] == b[1] && a[2] == b[2])
            {
                std::cout << "You WIN\n";
                std::cout << "Number: " << "\t" << numb <<'\n';
                break;
            }

        }
         std::cout <<"If you want to play one more time press C to continue\n";
         char choise;
         std::cin >> choise;
         if (choise != 'C' || choise != 'c')
         {
             break;
         }

    }


    return 0;
}



