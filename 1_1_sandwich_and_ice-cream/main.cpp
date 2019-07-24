#include <iostream>
#include <string>

bool isSandwichWithIceCream (std :: string s)
{
    int lowerSandwichSize(0);
    int upperSandwichSize(0);
    int iceCreamSize(0);

    if (s[0] != s[s.size() - 1] || s[0] == s[s.size() / 2] || s[s.size() - 1] == s[s.size() / 2] )
    {
        return false;
    }

    for (int i(0); i < s.size(); i++)
    {
        if ( s[i] == s[0] )
        {
            lowerSandwichSize++;
        }
        if( s[i] != s[0])
        {
            break;
        }
    }

    for (int i(s.size() - 1) ; i != 0; i--)
    {
        if ( s[i] == s[0] )
        {
            upperSandwichSize++;
        }
        if( s[i] != s[0])
        {
            break;
        }
    }


    if (s[s.size() - 1] == s[0])
    {
        return true;
    }

    return false;
}

int main()
{
        std::string s;

        std::cin >> s;

        std::cout << isSandwichWithIceCream(s);
        std::cout << '\n';

        return 0;
}
