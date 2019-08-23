#include <iostream>


void usrInfce()
{
    bool m[17][36];

    for (int i(0); i < 17; i++)
    {
        for (int j(1); j < 36; j++)
        {
            m[i][j] = 0;
        }
    }

    while (true)
    {
        std::cout << "Choose:\n"
                     "1 - to add\n"
                     "2 - to show the number of reserved places\n"
                     "3 - to exit\n";

        std::cout << '\n';
        int choise(100);
        std::cin >> choise;

        switch (choise)
        {
            case 1 :
        {
            std::cout << "Input number of carriage: ";
            int carriage(0);
            std::cin >> carriage;

            std::cout << "Input number of seat : ";
            int seat(0);
            std::cin >> seat;

            if (!m[carriage + 1][seat])
            {
                m[carriage][seat] = 1;
            }
            else
            {
                std::cout << '\n';
                std::cout << "This place is reserved!\n"
                             "Please eneter another\n";
            }

        }

            break;

        case 2 :
        {
            int count(0);
            for (int i(0); i < 17; i++)
            {
                for (int j(1); j < 36; j++)
                {
                    if(m[i][j])
                    {
                        count++;
                    }
                }
            }

            std::cout << "The number of reserved places are: "
                      << count << '\n';
        }

            break;

        }

        if (choise == 3)
        {
            break;
        }



    }


}

int main()
{
    usrInfce();

    return 0;
}
