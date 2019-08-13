#include <iostream>
#include <string>
#include <random>
#include <unistd.h>

class Person
{
protected:
    std::string mName;
    std::string mPersonType;
    std::string mGreeting;
    int mAge;

public:

    std::string getPersonType()
    {
        return mPersonType;
    }

    int getAge()
    {
        return mAge;
    }

    std::string getName()
    {
        return mName;
    }

    std::string getGreeting()
    {
        return mGreeting;
    }

};

struct Formalists : public Person
{
 Formalists(std::string name, int year)
    {
       mName = name;
       mAge = year;

       std::string mGreeting = "Hello!";
       mPersonType = "formalist";
    }
};

struct Neoformalists : public Person
{
 Neoformalists(std::string name, int year)
    {
        mName = name;
        mAge = year;

        std::string mGreeting = "Hi";
        mPersonType = "neoformalist";
    }

};

struct Realists : public Person
{

    Realists(std::string name, int year)
    {
        mName = name;
        mAge = year;

        mPersonType = "realist";
        mGreeting = "Hello";
    }

    std::string getGreeting(int yearDifference)
    {
        if (yearDifference <= 5)
        {
            mGreeting = "Hi";
            return mGreeting;
        }

        return mGreeting;
    }
};

int age()
{
    std::random_device rd;
    std::mt19937 marsenne(rd());

    int rand = marsenne() % 100;

    if (rand >= 20 && rand <= 40)
    {
        return rand;
    }
    else
    {
       age();
    }
}


void usrInfce()
{
    Formalists Olena("Olena", age());

    Neoformalists Andriy("Andriy", age());
    Neoformalists Igor("Igor", age());

    Realists Tanya("Tanya", age());
    Realists Danylo("Danylo", age());


    //Olena intro
    std::cout << "My name is " << Olena.getName() << " . \n";
    std::cout << "I am " << Olena.getAge() << " years old. \n";
    std::cout << "And I am " << Olena.getPersonType() << " . \n";
    std::cout << "\n";

    //Andriy intro
    std::cout << "My name is " << Andriy.getName() << " . \n";
    std::cout << "I am " << Andriy.getAge() << " years old. \n";
    std::cout << "And I am " << Andriy.getPersonType() << " . \n";
    std::cout << "\n";

    //Igor intro
    std::cout << "My name is " << Igor.getName() << " . \n";
    std::cout << "I am " << Igor.getAge() << " years old. \n";
    std::cout << "And I am " << Igor.getPersonType() << " . \n";
    std::cout << "\n";

    //Tanya intro
    std::cout << "My name is " << Tanya.getName() << " . \n";
    std::cout << "I am " << Tanya.getAge() << " years old. \n";
    std::cout << "And I am " << Tanya.getPersonType() << " . \n";
    std::cout << "\n";

    //Danylo intro
    std::cout << "My name is " << Danylo.getName() << " . \n";
    std::cout << "I am " << Danylo.getAge() << " years old. \n";
    std::cout << "And I am " << Danylo.getPersonType() << " . \n";
    std::cout << "\n";

    //Olena - Danylo
    std::cout << Olena.getGreeting();
     //sleep(1);
    std::cout << " , ";
     //sleep(1);
    std::cout << Danylo.getName();
     //sleep(1);
    std::cout<< " ! " << " \n ";
     //sleep(2);

    //Danylo - Olena
    std::cout << Danylo.getGreeting(Olena.getAge() - Danylo.getAge());
     //sleep(1);
    std::cout << " , ";
     //sleep(1);
    std::cout << Olena.getName();
     //sleep(1);
    std::cout << " ! " << " \n ";
     //sleep(2);


    //Danylo - Andriy
    std::cout << Danylo.getGreeting(Igor.getAge() - Danylo.getAge());
     //sleep(1);
    std::cout << " , ";
     //sleep(1);
    std::cout << Igor.getName();
     //sleep(1);
    std::cout << " ! " << " \n ";
     //sleep(2);

    //Andriy - Danylo
    std::cout << Igor.getGreeting();
     //sleep(1);
    std::cout << " , ";
     //sleep(1);
    std::cout << Danylo.getName();
     //sleep(1);
    std::cout << " ! " << " \n ";
     //sleep(2);


    //Andriy - Igor
    std::cout << Andriy.getGreeting();
     //sleep(1);
    std::cout << " , ";
     //sleep(1);
    std::cout<< Igor.getName();
     //sleep(1);
    std::cout << " ! " << " \n ";
     //sleep(2);

    //Igor - Andriy
    std::cout << Igor.getGreeting();
     //sleep(1);
    std::cout << " , ";
     //sleep(1);
    std::cout << Andriy.getName();
     //sleep(1);
    std::cout << " ! " << " \n ";
     //sleep(2);


    //Igor - Tanya
    std::cout << Igor.getGreeting();
     //sleep(1);
    std::cout << " , ";
     //sleep(1);
    std::cout << Tanya.getName();
     //sleep(1);
    std::cout << " ! " << " \n ";
     //sleep(2);

    //Tanya - Igor
    std::cout << Tanya.getGreeting(Igor.getAge() - Tanya.getAge());
     //sleep(1);
    std::cout << " , ";
     //sleep(1);
    std::cout << Igor.getName();
     //sleep(1);
    std::cout << " ! " << " \n ";
     //sleep(2);


    //Tanya - Danylo
    std::cout << Tanya.getGreeting(Danylo.getAge() - Tanya.getAge());
     //sleep(1);
    std::cout << " , ";
     //sleep(1);
    std::cout << Danylo.getName();
     //sleep(1);
    std::cout << " ! " << " \n ";
     //sleep(2);

    //Danylo - Tanya
    std::cout << Danylo.getGreeting(Tanya.getAge() - Danylo.getAge());
     //sleep(1);
    std::cout << " , ";
     //sleep(1);
    std::cout << Tanya.getName();
    //sleep(1);
    std::cout << " ! " << " \n ";
     //sleep(2);
}

int main(int argc, char *argv[])
{
    usrInfce();
    return 0;
}
