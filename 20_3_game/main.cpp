#include <iostream>
#include <random>

int randomNumb(int max)
{
    std::random_device rd;
    std::mt19937 mersenne (rd());
    int result (1);

    if (max > 20)
    {
        result = mersenne() % 100;
    }
    else if (max <= 10 && max >= 6)
    {
        result = mersenne() % 10;

        if (result % 2 != 0)
        {
            result -= 1;
        }
    }
    else if (max <= 6)
    {
        result = 1;
    }


    if(max <= result)
    {
        randomNumb(max);
    }
    else
    {
        if (result == 0)
        {
            result = 1;
        }
        return  result;
    }

}

void usrInfce()
{
  int count (100);
  int turn (0);

  bool whoWin(1); // you - 1, programm - 0;

  while(count >= 0)
  {

      std::cout << "Your turn :";

      std::cin >> turn;

      count -= turn;
      whoWin = 1;
      std::cout << "Left : " << count;
      std::cout << '\n';
      if (count == 0)
      {
          break;
      }

      int progTurn  = randomNumb(count);
      std::cout << "Programm :" << progTurn;
      std::cout << '\n';
      count -= progTurn;

      whoWin = 0;
      std::cout << "Left : " << count;
      std::cout << '\n';
      if (count == 0)
      {
          break;
      }
  }

  if (whoWin)
  {
      std::cout << "You won!\n";
  }
  else
  {
    std::cout << "You loose :-)\n";
  }

}

int main()
{
    usrInfce();
    return 0;
}
