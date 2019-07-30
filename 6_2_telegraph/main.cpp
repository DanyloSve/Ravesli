#include <iostream>
#include <string>
#include <unistd.h>

class Person
{
private:
std::string mName;
std::string mAddress;
std::string mAddressOfWork;
std::string mPhoneNumber;
int mWage;

public:

Person(std::string name, std::string address, std::string addressOfWork, std::string phoneNumber, int wage)
{
    mName = name;
    mAddress = address;
    mAddressOfWork = addressOfWork;
    mPhoneNumber = phoneNumber;
    mWage = wage;
}

void info()
{
    std::cout << '\n';
    std::cout << "Name:";
    sleep(1);
    std::cout << mName << '\n';

    sleep(2);

    std::cout << "Address:";
    sleep(1);
    std::cout << mAddress << '\n';

     sleep(2);

    std::cout << "Address of work:";
     sleep(1);
     std::cout << mAddressOfWork << '\n';

     sleep(2);

    std::cout << "Phone number:";
    sleep(1);
    std::cout << mPhoneNumber << '\n';

     sleep(2);

    std::cout << "Wage:";
    sleep(1);
    std::cout << mWage << '\n';

      sleep(2);
}


};
int main()
{
   std::string name;
   std::string address;
   std::string addressOfWork;
   std::string phoneNumber;
   int wage(0);

   std::cout << "Enter your name:\n";
   std::cin >> name;
   std::cin.ignore(32767, '\n');

   std::cout << "Enter your address:\n";
   getline(std::cin, address);

   std::cout << "Enter adress of work:\n";
   getline(std::cin, addressOfWork);

   std::cout << "Enter your phone number:\n";
   std::cin >> phoneNumber;

   std::cout << "Enter your wage:\n";
   std::cin >> wage;

   Person person(name, address, addressOfWork, phoneNumber, wage);

   person.info();
   std::cout << '\n';

   return 0;
}
