#include <iostream>
#include <random>

int randomOrder()
{
    int max(5);

    std::random_device rd;
    std::mt19937 mersenne (rd());

    int n = mersenne() % 10;

    if (n > max)
    {
        n -= 4;
        if (n > max)
        {
            randomOrder();
        }
    }

    return n;
}

void question1(bool *correctAnswers, bool *isChecked, int &i)
{
    isChecked[0] = 1;
    int answer = 100;

    std::cout << "Elon Musc was born in ..." << '\n';
    std::cout << "1 - the USA\n"
              << "2 - the Great Britain\n"
              << "3 - Germany\n"
              << "4 - South Africa\n";

    std::cout << '\n';
    std::cin >> answer;
    std::cout << '\n';

    if (answer == 4)
    {
        std::cout << "Correct!\n"
                  <<"Correct answer is 1 - South Africa \n";
        correctAnswers[i] = true;
    }
    else
    {
        std::cout << "Incorrect!\n"
                  << "Correct answer is 4 in South Africa \n";
    }
}

void question2(bool *correctAnswers, bool *isChecked, int &i)
{
    isChecked[1] = 1;
    int answer = 100;

    std::cout << "In which film  Elon Musc  appeared...\n";
    std::cout << "1 - Spiderman \n"
                 "2 - Iron Man 2\n"
                 "3 - Avenger 2\n"
                 "4 - Avengers the end game\n";

    std::cout << '\n';
    std::cin >> answer;
    std::cout << '\n';

    if (answer == 2)
    {
        std::cout << "Correct!\n"
                  <<"Correct answer is 2 - Iron Man 2\n";
        correctAnswers[i] = 1;
    }
    else
    {
        std::cout << "Incorrect!\n"
                  <<"Correct answer is 2 - Iron Man 2\n";
    }
}

void question3(bool *correctAnswers, bool *isChecked, int &i)
{
    isChecked[2] = 1;
    int answer = 100;

    std::cout << "Elon Musc is founder of ..." << '\n';
    std::cout << "1 - Ebay\n"
              << "2 - Amazon\n"
              << "3 - PayPal\n"
              << "4 - MasterCard\n";

    std::cout << '\n';
    std::cin >> answer;
    std::cout << '\n';

    if (answer == 3)
    {
        std::cout << "Correct!\n"
                  <<"Correct answer is 3 - PayPal \n";
        correctAnswers[i] = true;
    }
    else
    {
        std::cout << "Incorrect!\n"
                  <<"Correct answer is 3 - PayPal \n";
    }
}


void question4(bool *correctAnswers, bool *isChecked, int &i)
{
    isChecked[3] = 1;
    int answer = 100;

    std::cout << "Musk has reduced the cost of reaching the International Space Station by  ..." << '\n';
    std::cout << "1 - 90%\n"
              << "2 - 80%\n"
              << "3 - 70%\n"
              << "4 - 50%\n";

    std::cout << '\n';
    std::cin >> answer;
    std::cout << '\n';

    if (answer == 1)
    {
        std::cout << "Correct!\n"
                  <<"Correct answer is 1 - 90%\n";
        correctAnswers[i] = true;
    }
    else
    {
        std::cout << "Incorrect!\n"
                  <<"Correct answer is 1 - 90%\n";
    }
}

void question5(bool *correctAnswers, bool *isChecked, int &i)
{
    isChecked[4] = 1;
    int answer = 100;

    std::cout << "SpaceX's CEO, Elon Musk, named the spacecraft ""Dragon"" after  ..." << '\n';
    std::cout << "1 - movie\n"
              << "2 - song\n"
              << "3 - book\n"
              << "4 - who knows?\n";

    std::cout << '\n';
    std::cin >> answer;
    std::cout << '\n';

    if (answer == 2)
    {
        std::cout << "Correct!\n"
                  <<"Correct answer is 2 - a the 1963 song ""Puff, the Magic Dragon""\n";
        correctAnswers[i] = true;
    }
    else
    {
        std::cout << "Incorrect!\n"
                  <<"Correct answer is 2 song ""Puff, the Magic Dragon""\n";
    }
}

int main()
{
    bool correctAswers[5] = {0, 0, 0, 0, 0};
    bool isChecked[5] = {0, 0, 0, 0, 0};
    int i(0);

    while(true)
    {
        switch (randomOrder())
        {
        case 1 :
            if (!isChecked[0])
            {
                question1(correctAswers, isChecked, i);
                i++;
                std::cout << '\n';
            }
            break;

        case 2:
            if (!isChecked[1])
            {
                question2(correctAswers, isChecked, i);
                i++;
                std::cout << '\n';
            }
            break;

        case 3:
            if (!isChecked[2])
            {
                question3(correctAswers, isChecked, i);
                i++;
                std::cout << '\n';
            }
            break;

        case 4:
            if (!isChecked[3])
            {
                question4(correctAswers, isChecked, i);
                i++;
                std::cout << '\n';
            }
            break;

        case 5:
            if (!isChecked[4])
            {
                question5(correctAswers, isChecked, i);
                i++;
                std::cout << '\n';
            }
            break;
        }


        bool exit(1);
        for (int i(0); i < 5; i++)
        {
            if(isChecked[i] == 0)
            {
                exit = 0;
                break;
            }
        }

        if (exit)
        {
            break;
        }
    }

    std::cout << "Your results: \n";
    for (int i(0); i != 5; i++)
    {
        std::cout << "Question № " << i + 1;

        if(correctAswers[i])
        {
            std::cout << " + \n";
        }
        else
        {
            std::cout << " - \n";
        }
    }

    return 0;
}
