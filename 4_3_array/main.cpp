#include <iostream>

class FirstArray
{
private:
    int mNumber;
    char *pFirst;
public:

    char *getpFirst()
    {
        return pFirst;
    }

    int getmNumber()
    {
        return mNumber;
    }

    void firstArray()
    {
        char lCharacter;
        int buffer(4);
        char *first = new char [buffer];
        int position(0);

        bool space [3];
        int countSpace(0);
        int i(0);

        while(std::cin.get(lCharacter) && lCharacter != '\n')
        {
           if (buffer == position)
           {
               buffer *= 2;
               char *temp = new char [buffer];
               for (int i(0); i < buffer / 2; i++)
               {
                   temp[i] = first[i];
               }
               temp[buffer / 2] = lCharacter;
               delete [] first;
               first = temp;
           }
           else
           {
               first[position] = lCharacter;
           }

           position ++;
        }

        first[position] = ' ';
        mNumber = position + 1;
        pFirst = first;
    }
};

class SecondArray
{
private:
    int mNumber;
    char *pSecond;
public:

    char *getpSecond()
    {
        return pSecond;
    }
    int getmNumber()
    {
        return mNumber;
    }
    void secondArray()
    {
        char lCharacter;
        int buffer(4);
        int position(0);

        char *second = new char [buffer];

        while (std::cin.get(lCharacter) && lCharacter != '\n')
        {
            if (buffer == position)
            {
                char *temp = new char [buffer *= 2];
                for (int i(0); i < buffer / 2; i++)
                {
                    temp[i] = second[i];
                }
                temp[buffer / 2] = lCharacter;
                delete [] second;
                second = temp;
            }
            else
            {
                second [position] = lCharacter;
            }

            position++;
        }
        mNumber = position;
        pSecond = second;

   }

};

class SumOfArrays
{
private:
    int mNumber;
    char *pSumOfArrays;
public:
    char *pSum()
    {
        return pSumOfArrays;
    }
    void sumOfArrays()
    {
        FirstArray first;
        SecondArray second;

        first.firstArray();
        second.secondArray();

        int buffer(first.getmNumber() + second.getmNumber() + 1);
        char *sumOfArrays = new char[buffer] ();


        for (int i(0), j(0); i < buffer; i++)
        {
            if (i <= first.getmNumber())
            {
                sumOfArrays[i] = first.getpFirst()[i];
            }
            else
            {
                sumOfArrays[i] = second.getpSecond()[j];
                j++;
            }
        }


        mNumber = buffer;
        pSumOfArrays  = sumOfArrays;
    }

    int getmNumber()
    {
        return mNumber;
    }
};

int main()
{
    SumOfArrays sum;
    sum.sumOfArrays();

    for (int i(0); i < sum.getmNumber(); i++)
    {
        std::cout << sum.pSum()[i];
    }
    std::cout << '\n';
    return 0;
}
