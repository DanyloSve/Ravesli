#include <iostream>

void userInterface()
{
    double aver(3.0);

    std::cout << "Input average mark:\n";
     while (true)
    {

      while (!(std::cin >> aver))
      {
          std::cout << "Error: enter a number!\n";
          std::cin.clear();
          std::cin.ignore(100,'\n');
      }

     if (aver >= 3 && aver <= 5)
     {
         break;
     }
     else
     {
         std::cout << "Your input is not correct!\n"
                   << "Input one more time: \n";
     }
    }

     int practise (0);
     double rate (0);

     std::cout << "Input your practise years:\n";
     while (true)
     {
         while (!(std::cin >> practise))
         {
             std::cout << "Error: enter a number!\n";
             std::cin.clear();
             std::cin.ignore(100,'\n');
         }


      if (practise == 0)
      {
          rate = aver;
          break;
      }
      else if (practise > 0 && practise < 2)
      {
          rate = aver * 13;
          break;
      }
      else if (practise >= 2 && practise <= 5)
      {
          rate = aver * 16;
          break;
      }
    }

     if (rate < 45 )
     {
         std::cout << "\nWe are sorry...\n"
                   << "Your rate is: " << rate << '\n'
                   << "You are not passed to magister\n";
     }
     else
     {
        std::cout << "\nCongratulations!\n"
                  << "Your rate is: " << rate << '\n'
                  << "You passed!\n";

     }
}


int main()
{
    userInterface();
    return 0;
}
