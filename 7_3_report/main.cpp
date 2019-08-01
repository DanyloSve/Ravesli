#include <iostream>
#include <fstream>

std::fstream gF;
int gNumbOfStudents(0);

class Report
{
private:
    std::string mStudentId;
    int mPoints [3];

public:
    void addId()
    {
        std::string name;
        std::cout << "Input Student name:\n";
        std::cin >> name;

        std::string surname;
        std::cout << "Input Student surname:\n";
        std::cin >> surname;

        gF << "Student information : ";

        gF << name <<' '<<surname;
        gF <<'\n';

    }


    void addMarks()
    {
       gF <<  "Points              : ";

         while (true)
       {
            for (int i(0); i < 3; i++)
            {
                std::cin >> mPoints[i];
            }

           bool isInputCorrect(true);

           for (int i(0); i < 3; i++)
           {
               if (mPoints[i] > 5 || mPoints[i] < 0)
               {
                   std::cout << "Your input is not correct!\n";
                   std::cout << "Try one more time:\n";
                   isInputCorrect = false;
                   break;
               }
           }

           if (isInputCorrect)
           {
               gF << mPoints[0] <<' '<< mPoints[1] << ' ' << mPoints [2] ;
               break;
           }
       }

       gF << '\n';
       std::cout <<'\n';
    }
};

void readFile()
{
    std::string buffer;
    std::getline (std::cin, buffer);


    if (buffer.empty())
    {
        gF << "Here are 0 students\n";
    }
    else
    {
        buffer[10];
    }
}

void userInterface()
{
    std::string path("input_data.txt");

    gF.open(path, std::fstream::in | std::fstream::out | std::fstream::app);

    if (gF.is_open())
    {
        std::cout << "File is opened successful!\n";
    }
    else
    {
        std::cout << "Error! File is NOT opened !\n";
    }
    readFile();


    while (true)
    {

        Report r;
        std::cout << "Input student information\n";
        r.addId();

        std::cout << "Input student's marks: \n";
        r.addMarks();

        std::cout << "Press :\n"
                  << "1 to exit\n"
                  << "2 to add\n";

        int choise(0);
        std::cin >> choise;

        if (choise == 1)
        {
            break;
        }


    }
    gF.close();

}
int main()
{
    userInterface();

    return 0;
}
