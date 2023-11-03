#include <iostream>
#include "funcs.h"

using namespace std;

void Sum()
{
    system("cls");

    double a, b;

    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << endl << "a + b = " << a + b
         << endl << endl;
}

void Sub()
{
    system("cls");

    double a, b;

    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << endl << "a - b = " << a - b
         << endl << endl;
}
void Div()
{
    system("cls");

    double a, b;

    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    if (b != 0.0)
    {
        cout << endl << "a / b = " << a / b
             << endl << endl;
    }
    else
    {
        cout << endl << "Error! b = 0"
             << endl << endl;
    }
}
void Mul() // добавить реализацию в main
{
	system("cls");

    double a, b;

    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << endl << "a * b = " << a * b
         << endl << endl;
}
