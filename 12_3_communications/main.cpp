#include <iostream>
#include <random>

class Person
{
protected:
    std::string mName;
    std::string mPersonType;
    int mYear;

 };

class Formalists : public Person
{
private:
    std::string mGreeting;

public:
    Formalists(std::string name, int year)
    {
       mName = name;
       mYear = year;
       std::string mGreeting = "Hello!";
       mPersonType = "formal";
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
        mYear = year;

        std::string mGreeting = "Hi";
        mPersonType = "neoformal";
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
        mYear = year;
        mPersonType = "realist";
    }

    std::string getGreeting(int yearDifference)
    {
        if (yearDifference <= 5)
        {
            return mGreeting = "Hi";
        }
        else
        {
            return mGreeting = "Hello";
        }
    }


};

int year()
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
        year();
    }
}


int type()
{
    std::random_device rd;
    std::mt19937 marsenne(rd());

    int rand = marsenne() % 10;

    if (rand >= 1 && rand <= 3)
    {
          return rand;
    }
    else
    {
        type();
    }
}
void usrInfce()
{

    Olexander().setName("Olexander");
    Olexander().setYear(year());
    Olexander().

    Person Igor();
    Person Anna();
    Person Danylo();
    Person Andriy();

}
int main(int argc, char *argv[])
{


    return 0;
}
