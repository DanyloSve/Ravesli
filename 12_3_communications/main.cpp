#include <iostream>
#include <vector>
#include <random>
#include <unistd.h>

class Person
{
protected:
    std::string mName;
    std::string mPersonType;
    int mAge;
};

class Formalists : public Person
{
private:
    std::string mGreeting;

public:
    Formalists(std::string name, int year)
    {
       mName = name;
       mAge = year;
       std::string mGreeting = "Hello!";
       mPersonType = "formal";
    }

    std::string getGreeting()
    {
        return mGreeting;
    }

    int getAge()
    {
        return mAge;
    }

    std::string getName()
    {
        return mName;
    }

};

class Neoformalists : Person
{
private:
    std::string mGreeting;

public:
    Neoformalists(std::string name, int year)
    {
        mName = name;
        mAge = year;

        std::string mGreeting = "Hi";
        mPersonType = "neoformal";
    }

    std::string getGreeting()
    {
        return mGreeting;
    }

    int getAge()
    {
        return mAge;
    }

    std::string getName()
    {
        return mName;
    }
};

class Realists : Person
{
private:
    std::string mGreeting;

public:
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
        else
        {
            mGreeting = "Hello";
            return mGreeting;
        }
    }

    int getAge()
    {
        return mAge;
    }

    std::string getName()
    {
        return mName;
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


int type()
{
    std::random_device rd;
    std::mt19937 marsenne(rd());

    int rand = marsenne() % 10;

    if (rand >= 1 && rand <= 3)
    {
          if (rand == 1)
          {
             return rand;
          }
    }
    else
    {
        type();
    }
}

void usrInfce()
{
    Formalists Olena("Olena", age());

    Neoformalists Andriy("Andriy", age());
    Neoformalists Igor("Igor", age());

    Realists Tanya("Tanya", age());
    Realists Danylo("Danylo", age());


    //Olena - Danylo
    std::cout << Olena.getGreeting();
     sleep(1);
    std::cout << " , ";
     sleep(1);
    std::cout << Danylo.getName();
     sleep(1);
    std::cout<< " ! " << " \n ";
     sleep(2);

    //Danylo - Olena
    std::cout << Danylo.getGreeting(Olena.getAge() - Danylo.getAge());
     sleep(1);
    std::cout << " , ";
     sleep(1);
    std::cout << Olena.getName();
     sleep(1);
    std::cout << " ! " << " \n ";
     sleep(2);


    //Danylo - Andriy
    std::cout << Danylo.getGreeting(Igor.getAge() - Danylo.getAge());
     sleep(1);
    std::cout << " , ";
     sleep(1);
    std::cout << Igor.getName();
     sleep(1);
    std::cout << " ! " << " \n ";
     sleep(2)
             ;
    //Andriy - Danylo
    std::cout << Igor.getGreeting();
     sleep(1);
    std::cout << " , ";
     sleep(1);
    std::cout << Danylo.getName();
     sleep(1);
    std::cout << " ! " << " \n ";
     sleep(2);


    //Andriy - Igor
    std::cout << Andriy.getGreeting();
     sleep(1);
    std::cout << " , ";
     sleep(1);
    std::cout<< Igor.getName();
     sleep(1);
    std::cout << " ! " << " \n ";
     sleep(2);

    //Igor - Andriy
    std::cout << Igor.getGreeting();
     sleep(1);
    std::cout << " , ";
     sleep(1);
    std::cout << Andriy.getName();
     sleep(1);
    std::cout << " ! " << " \n ";
     sleep(2);


    //Igor - Tanya
    std::cout << Igor.getGreeting();
     sleep(1);
    std::cout << " , ";
     sleep(1);
    std::cout << Tanya.getName();
     sleep(1);
    std::cout << " ! " << " \n ";
     sleep(2);

    //Tanya - Igor
    std::cout << Tanya.getGreeting(Igor.getAge() - Tanya.getAge());
     sleep(1);
    std::cout << " , ";
     sleep(1);
    std::cout << Igor.getName();
     sleep(1);
    std::cout << " ! " << " \n ";
     sleep(2);


    //Tanya - Danylo
    std::cout << Tanya.getGreeting(Danylo.getAge() - Tanya.getAge());
     sleep(1);
    std::cout << " , ";
     sleep(1);
    std::cout << Danylo.getName();
     sleep(1);
    std::cout << " ! " << " \n ";
     sleep(2);

    //Danylo - Tanya
    std::cout << Danylo.getGreeting(Tanya.getAge() - Danylo.getAge());
     sleep(1);
    std::cout << " , ";
     sleep(1);
    std::cout << Tanya.getName();
    sleep(1);
    std::cout << " ! " << " \n ";
     sleep(2);
}

int main(int argc, char *argv[])
{
    usrInfce();
    return 0;
}
