#include <iostream>

class Comparation
{
private:
    int mA;
    int mB;
public:
    void setA (int a)
    {
      mA = a;
    }

    void setB (int b)
    {
        mB = b;
    }

    void compare()
    {
        (mA != mB) ? ( (mA > mB) ? (std::cout << mA << " > " << mB) : (std::cout << mA << " < " << mB) ) :
                     (std::cout << mA << " = " << mB);
    }
};
int main()
{
    Comparation numb;
    int a(0);
    int b(0);
    std::cout << "Input two integers: \n";
    std::cin >> a >> b;

    numb.setA(a);
    numb.setB(b);
    numb.compare();

    std::cout << '\n';
    return 0;
}
