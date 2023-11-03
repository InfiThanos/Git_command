#include <iostream>
#include "funcs.h"

using namespace std;

int main()
{
    char choise;
    do
    {
        cout << "Calculator" << endl;
        cout << "1 - sum" << endl
             << "2 - sub" << endl
             << "3 - mul" << endl
             << "4 - div" << endl
             << endl;

        int result;

        cin >> result;

        switch (result)
        {
        case 1:
            my_sum();
            break;
        case 2:
            Sub();
            break;
        case 3:
            cout << "Function in development" << endl;
            break;
        case 4:
            cout << "Function in development" << endl;
            break;
        default:
            cout << "Input error" << endl;
            break;
        }

        cout << "repeat? (y/n) ";
        cin >> choise;
        system("cls");
    }
    while(choise == 'y');

    system("pause");

    return 0;
}

