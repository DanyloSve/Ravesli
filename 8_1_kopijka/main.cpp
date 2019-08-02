#include <iostream>

int main(int argc, char *argv[])
{
    while (true)
    {
        setlocale(LC_ALL, "ukr");
        std::cout << "Введіть число від 1 до 99\n";

        int kopijka;
        std::cin >> kopijka;

        if (kopijka >= 11 && kopijka <= 19)
        {
            std::cout << kopijka << " копійок \n";
            return 0;
        }

        switch(kopijka % 10 )
        {
        case 1 :
            std::cout << kopijka << " копійка \n";
            break;

        case 2 :
        case 3 :
        case 4 :
            std::cout << kopijka << " копійки \n";
            break;

        case 5 :
        case 6 :
        case 7 :
        case 8 :
        case 9 :
        case 0 :
            std::cout << kopijka << " копійок \n";

        }

    }
    return 0;
}
