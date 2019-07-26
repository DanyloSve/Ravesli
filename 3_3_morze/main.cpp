#include <iostream>
#include <fstream>



int main(int argc, char *argv[])
{
    std::string s;
    std::getline(std::cin, s);
    std::ofstream fout;
    fout.open("morze.txt");

    for (int i(0); i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'a':
        case 'A':
            fout<<"._";
            break;

        case 'b':
        case 'B':
            fout<<"_...";
            break;


        case 'c':
        case 'C':
            fout<<"_._.";
            break;


        case 'd':
        case 'D':
            fout<<"_..";
            break;


        case 'e':
        case 'E':
            fout<<".";
            break;

        case 'f':
        case 'F':
            fout<<".._.";
            break;

        case 'g':
        case 'G':
            fout<<"__.";
            break;

        case 'h':
        case 'H':
            fout<<"....";
            break;

        case 'i':
        case 'I':
            fout<<"..";
            break;

        case 'j':
        case 'J':
            fout<<".___";
            break;

        case 'k':
        case 'K':
            fout<<"_._";
            break;

        case 'l':
        case 'L':
            fout<<"._..";
            break;

        case 'm':
        case 'M':
            fout<<"__";
            break;

        case 'n':
        case 'N':
            fout<<"_.";
            break;

        case 'o':
        case 'O':
            fout <<"___";
            break;

        case 'p':
        case 'P':
            fout <<".__.";
            break;

        case 'q':
        case 'Q':
            fout <<"__._";
            break;

        case 'r':
        case 'R':
            fout <<"._.";
            break;

        case 's':
        case 'S':
            fout <<"...";
            break;

        case 't':
        case 'T':
            fout <<"_";
            break;

        case 'u':
        case 'U':
            fout <<"";
            break;

        case 'v':
        case 'V':
            fout <<".._";
            break;

        case 'w':
        case 'W':
            fout <<"..._";
            break;

        case 'x':
        case 'X':
            fout<<"_.._";
            break;

        case 'y':
        case 'Y':
            fout <<"_.__";
            break;

        case 'z':
        case 'Z':
            fout <<"__..";
            break;

        default:
            fout << s[i];
        }
        fout << ' ';

    }
    fout << '\n';
    fout.close();
    return 0;
}
