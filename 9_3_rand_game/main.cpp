#include <iostream>
#include <random>


namespace myNamespace
{
    int* calc()
    {
        int  m[5][3] = { {6, 7, 8},{7, 8, 9}, {6, 9, 10},{ 6, 9, 8},{ 7, 6, 10}};

        int *sum = new int [5];

        for (int i(0); i != 5; i++)
        {
            for(int j(1); j != 3; j++)
            {
                sum[i] += m[i][j];
            }
        }

        return sum;
    }

    int rand()
    {
        std::random_device rd;
        std::mt19937 mersenne(rd());

        int random = mersenne() % 10;

        if (random > 5)
        {
            random -= 4;
        }


    return random;
    }

    void userInterface()
    {
        std::vector <int> a[3];
        int usrnumb(0);
        int sum(0);
        std::cout << "Input 3 numbers:\n";
        for (int i(0); i < 3; i++)
        {
            while (!(std::cin >> usrnumb))
            {
                std::cout << "Error: input a integer!\n";
                std::cin.clear();
                std::cin.ignore(3000, '\n');
                i = -1;
                sum = 0;
                std::cout << "Input number 3 integers:\n";
            }
            sum+= usrnumb;
        }

        int cmpnumb = calc()[rand()];
        std::cout << "Computert numb : " << cmpnumb <<'\n';
        if (sum > cmpnumb)
        {
            std::cout << "Congratulations!\n"
                         <<"You win\n";
        }
        else
        {
            std::cout << ":(\n"
                         <<"You losee...!\n";
        }
    }

}

int main()
{
   myNamespace::userInterface();
    return 0;
}
