#include <iostream>
#include <string>


struct Student
{
   std::string mName;
   u_int mYear;
   std::string mSpecialization;
   double mRating[5];
   double mAverMark;
};

void add(int &position, Student *List)
{

    std::cout << "Input name:\n";
    std::cin >> List[position].mName;

    std::cout << "Input Year\n";
    std::cin >> List[position].mYear;

    std::cout << "Input spacialization:\n";
    std::cin >> List[position].mSpecialization;

    std::cout << "Input 5 marks:\n";

    double sum(0);
    for(int i(0); i < 5; i++)
    {
        std::cin >> List[position].mRating[i];
        sum += List[position].mRating[i];
    }

    List[position].mAverMark = sum / 5;

    position++;
}



void sort(Student *List)
{
    std::cout << "Input:\n"
                << "1 - to sork by name\n"
                << "2 - to sort by year\n"
                << "3 - to sort by average mark\n";

    int choise;
    std::cin >> choise;

    switch (choise)
    {

    case 1:
        {
            for (int i(0); i < 10; i++)
            {
                for (int j(0); j < 10; j++)
                {
                    if (List[i].mName[0] <= List[j].mName[0])
                    {
                        std::swap(List[i].mName , List[j].mName);
                    }

                }
            }

        }
        break;

    case 2:
        {
            for (int i(0); i < 10; i++)
            {
                for (int j(0); j < 10; j++)
                {
                    if (List[i].mYear <= List[j].mYear)
                    {
                        std::swap(List[i].mYear , List[j].mYear);
                    }

                }
            }
        }
        break;

    case 3:
        {
            for (int i(0); i < 10; i++)
            {
                for (int j(0); j < 10; j++)
                {
                    if (List[i].mAverMark <= List[j].mAverMark)
                    {
                        std::swap(List[i].mAverMark , List[j].mAverMark);
                    }

                }
            }
        }
    }



}

void show(Student *List)
{
    for (int i(0); i < 5; i++)
    {
        std::cout << "/////////////////////////////////\n";
        std::cout << "Name : " << List[i].mName << '\n'
                  << "Year : " << List[i].mYear << '\n'
                  << "Specialization : " << List[i].mSpecialization << '\n'
                  << "Average mark : " << List[i].mAverMark << '\n';
    }
}

void usrIntrfce()
{
    Student List[5];
    int position(0);

    //gF.open();

    while (true)
    {

        std::cout << "Enter:\n"
                  << "1 - to add\n"
                  << "2 - to sort\n"
                  << "3 - to show\n"
                  << "4 - to exit\n";

        int choise (4);
        std::cin >> choise;

        switch (choise)
        {

        case 1:

            if ( position != 5)
            {
                  add(position, List);
            }
                else
            {
                std::cout << "List is full\n";
            }
            break;

        case 2:
            sort(List);
            break;

        case 3:
            show(List);
            break;

        }

        if (choise == 4)
        {
            break;
        }


    }

}

int main(int argc, char *argv[])
{
    usrIntrfce();
    return 0;
}
