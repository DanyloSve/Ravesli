#include <iostream>
#include <string>
#include <vector>


class Application
{
private:

    std::string mPassengerId;
    std::string mDestination;
    std::string mTime;

public:
    Application(std::string passengerId, std::string destination, std::string time)
    {
        mPassengerId = passengerId;
        mDestination = destination;
        mTime = time;
    }

    void showApplication()
    {
        std::cout << "Name / Surname   : " << mPassengerId << '\n';
        std::cout << "Destination      : " << mDestination << '\n';
        std::cout << "Time of arrival  : " << mTime <<'\n';
    }
};

class BookOfApplications
{
private:
    std::vector <Application> bookOfApplication;

public:
    void add(std::string passengerId, std::string destination,std::string time)
    {
        bookOfApplication.push_back(Application(passengerId, destination, time));
    }

    void show()
    {
        for(int i(0); i < bookOfApplication.size(); i++)
        {
            std::cout << "Application ID   : " << i << '\n';
            bookOfApplication[i].showApplication();
            std::cout << '\n';
        }
    }

    void erase(int id)
    {
        bookOfApplication.erase(bookOfApplication.begin() + id);
    }
};

void userInterface()
{
    std::string passengerId;
    std::string destination;
    std::string time;
    BookOfApplications Book;

    while (true)
    {
        std::cout << "If you want to add a new application enter 1\n"
                     "If you want to show all aplications  enter 2\n"
                     "If you want to erase                 enter 3\n"
                     "If you want to exit                  enter 4\n";

        int choise(4);
        std::cin >> choise;
        switch (choise)
        {
            case 1 :
        {
            std::cout << "Name / Surname   : ";
            std::getline(std::cin, passengerId);// не працює оце поле
            std::cin.ignore(37272, '\n');
            std::cout << '\n';

            std::cout << "Destination      : ";
            std::getline(std::cin, destination);
            std::cin.ignore(37272, '\n');
            std::cout << '\n';

            std::cout << "Time of arrival  : ";
            std::getline(std::cin, time);
            std::cin.ignore(37272, '\n');
            std::cout << '\n';


            Book.add(passengerId, destination, time);

        }
            break;

        case 2 :
        {

            Book.show();
        }
            break;

        case 3 :
        {
            std::cout<< "Enter appltication ID to erase: ";
            int id(0);
            std::cin >> id;
            Book.erase(id);
        }
        }

        if (choise == 4)
        {
            break;
        }

    }
}
int main()
{
    userInterface();

    return 0;
}
