#include <iostream>

namespace myNamespace
{
    //створення масиву

    char **createArr(int a, int b)
    {
        char **m = new char *[a];
        m[0] = new char[a * b];

            for (int j(1); j != a; ++j)
            {
                m[j] = m [j - 1] + b;
            }

        //заповнення масиву елементами, що вивести неініціалізований масив
        for (int i(0); i != a ; i++)
        {
            for (int j(1); j != b + 1; j++)
            {
                m[i][j] = ':';
            }
        }
        return m;
    }

    //видалення масиву
    void deleteArr(char **m, int a)
    {
        for (int i(0); i != a; i++)
        {
            delete [] m[0];
            delete [] m;
        }

        delete [] m;
    }

    //виводення масиву після кожного введення елементу у консоль
    void vizualize (char **m, int a, int b)
    {
        for (int i(-1); i != a + 1; i++)
        {

            for (int j(0); j != b + 2; j++)
            {
                if (i == -1 || i == a)
                {
                 std::cout << '#';

                }
                else if (j == 0 || j == b + 1)
                {
                    std::cout << '#';
                }
                else if ( (i != -1 || i != a) || (j != 0 || j != b + 1))
                {
                    std::cout << m[i][j];
                }
            }
            std::cout <<'\n';
        }
    }

    //ініціалізування масиву

    void initialize(char **m, int a, int b)
    {
        vizualize(m, a, b);
        char iteam;

        for (int i(0); i != a; i++)
        {
            for (int j(1); j != b + 1; j++)
            {
                std::cin >> iteam;
                m[i][j] = iteam;

                vizualize(m, a, b);
            }
        }

       }

    void search(char** m, int a, int b, char search)
    {
        bool found = false;
        for(int i(0); i != a; i++)
        {
            for (int j(1); j != b + 1; j++)
            {
                if (m[i][j] != search)
                {
                    m[i][j] = '.';
                }
                else
                {
                        found = true;

                }
            }
        }

        vizualize(m, a,b);
        if(found)
        {
            std::cout << "Your character is found!\n";

        }
        else
        {
            std::cout << "Sorry...\n"
                      << "I did not found your character(\n";

        }
    }

    //інтерфейс програми
    void userInterface()
    {
        int i(0);
        int j(0);

        std::cout << "Input number of rows:\n";

        while (!(std::cin >> i))
        {
            std::cout << "Error: input a number!\n";
            std::cin.clear();
            std::cin.ignore(3000, '\n');
            std::cout << "Input number of rows:\n";
        }

        std::cout << "Input number of columns:\n";
        while (!(std::cin >> j))
        {
            std::cout << "Error: input a number!\n";
            std::cin.clear();
            std::cin.ignore(3000, '\n');
            std::cout << "Input number of columns:\n";
        }

        std::cout << "Input iteams of array:\n";

        char** m = createArr(i,j);
        initialize(m, i, j);

        std::cout << "Input iteam to search:\n";
        char toFind;

        while (!(std::cin >> toFind))
        {
            std::cin.clear();
            std::cin.ignore(3000, '\n');
         }
        search(m, i,j,toFind);

        deleteArr(m,i);
     }
}

int main()
{
    myNamespace::userInterface();
    return 0;
}
