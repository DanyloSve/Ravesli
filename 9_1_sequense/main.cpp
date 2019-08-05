#include <iostream>
#include <string>
#include <sstream>


namespace mySpace
{

    double array()
    {
        std::string input;
        std::getline(std::cin, input);

        int buffer(2);
        int position(0);

        double *number = new double[buffer];

        std::string temp;

        for (int i(0), j(0); input[i] != '\n'; i++)
        {
            if (input[i] == ' ')
            {
                std::stringstream convertion(input);

                if (buffer == position)
                {
                    double *tmp = new double [buffer * 2];

                    for (int k(0); k < buffer / 2; k++)
                    {
                        tmp[k] = number[k];
                    }
                    delete [] number;
                    number = tmp;
                }

                convertion >> number[position];
                position++;
                j = 0;
            }
            else
            {
                temp[j] = input[i]; // тут не ініціалізується temp
                j++;
            }
        }

        double sum(0);
        for (int i(0); i != position; i++)
        {
            sum += number[i];
        }
        return sum / position;
    }



    void usrInfce()
    {
        std::cout << array();
    }
}

int main(int argc, char *argv[])
{
    mySpace::usrInfce();
    return 0;
}
