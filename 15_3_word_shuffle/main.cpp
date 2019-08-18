#include <iostream>
#include <string>

int shuffle(int min, int max)
{
    static const double fraction = 1.0 / ( static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>( rand() * fraction * (max - min + 1) + min);
}

bool check(std::string guess, std::string s)
{
   for (int i(0); i < s.size(); i++)
   {
       if(guess[i] != s[i])
       {
           return 0;
       }
   }
   return 1;
}

void usrInfce()
{
   std::string s;
   std::cin >> s;

   std::string guess;

   int count(1);

   while (true)
   {
       for (int i(s.size() - 1); i != -1 ; i--)
       {
         guess[i] = s[shuffle(0, i)];
       }

       std::cout << count << " : " << guess << '\n';

       if (check(guess, s))
       {
           break;
       }

       count++;
   }
}

int main()
{
    usrInfce();
    return 0;
}
