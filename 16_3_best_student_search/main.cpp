#include <iostream>
#include <random>

int  ***createArr()
{
    int ***m = new int ** [40];

    for (int i(0); i != 40; ++i)
    {
         m[i] = new int * [3];

         for (int j(0); j != 3; j++)
         {
              m[i][j] = new int  [35];
         }
    }

    return m;
}

int mark()
{
 std::random_device rd;
 std::mt19937 mersenne(rd());

 int m = mersenne() % 10;

 if (m > 5)
 {
     m -= 4;
 }
 else if (m == 0)
 {
    m += 4;
 }

 return m;
}

void usrInfce()
{
    int ***m;
    m = createArr();
    int aver(0);

    for(int i(0); i < 40; i++)
    {
        for (int j(0); j < 3; j++)
        {
            for (int k(0); k < 35; k++)
            {
                m[i][j][k] = mark();

                if (i == 0)
                {
                    aver += m[0][j][k];
                }

            }
        }
    }


    int temp(0);
    int bestStudentId(0);

    for(int i(0); i < 40; i++)
    {
        for (int j(0); j < 3; j++)
        {
            for (int k(0); k < 35; k++)
            {
                temp += m[i][j][k];
            }
        }

        if (aver <= temp)
        {
            aver = temp;
            bestStudentId = i;
        }

        temp = 0;
    }

    std::cout << "Best student ID : " << bestStudentId << " average mark : " << (double) aver / 35 / 3 << '\n';
}

int main()
{
    usrInfce();
    return 0;
}
