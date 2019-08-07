#include <iostream>

int main(int argc, char *argv[])
{
    double stypendium(0);
    std::cout << "Input stypendium for 1 month\n";
    std::cin >> stypendium;

    double expenses(0);
    std::cout << "Input expenses for 1 month\n";
    std::cin >> expenses;

    double coasts(0);

    for (int i(0); i < 10; i++)
    {
        coasts += expenses - stypendium;
        expenses = expenses *1.03;
    }

    if (coasts <= 0)
    {
        std::cout << "No need to work!";
        std::cout << "Youv have additional " << -coasts << '\n';
    }
    else
    {
        std::cout << "Go and find work!";
        std::cout << "You have lack of " << stypendium - expenses <<'\n';
    }
    return 0;
}
