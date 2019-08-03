#include <iostream>

namespace myNamespace
{
    char **createArr(int a, int b)
    {
        char **m = new char *[a];
        m[0] = new char[a * b];

            for (int j(1); j != a; ++j)
            {
                m[j] = m [j - 1] + b;
            }



        for (int i(0); i != a; i++)
        {
            for (int j(1); j != b + 1; j++)
            {
                m[i][j] = '_';
            }
        }
        return m;
    }

    void deleteArr(char **m, int a)
    {
        for (int i(0); i != a; i++)
        {
            delete [] m[i];
        }

        delete [] m;
    }

    void vizualize (char **m, int a, int b)
    {
        for (int i(-1); i != a + 1; i++)
        {
            if (i == -1 || i == a)
            {
             std::cout << '#';
            }
            for (int j(0); j != b + 2; j++)
            {
                if (j == 0 || j == b + 1)
                {
                    std::cout << '#';
                }
                else
                {
                    std::cout << m[i][j];
                }
            }
            std::cout <<'\n';
        }
    }

    void initialize(char **m, int a, int b)
    {
        vizualize(m, a, b);
        char iteam;
        for (int i(0); i != a; i++)
        {
            for (int j(1); j != b; j++)
            {
                std::cin >> iteam;
                m[i][j] = iteam;
                vizualize(m, a, b);
            }
        }
    }


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

        //initialize(createArr(i, j), i, j);

        vizualize ((createArr(i, j)), i, j);
        deleteArr(createArr(i, j),i);

    }
}

int main()
{
    myNamespace::userInterface();
    return 0;
}
