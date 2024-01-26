#include <iostream>
// use setprecision(4)
#include <iomanip>
using namespace std;
int main()
{
    // typecasting : change the resulting datatype
    // depends on precendence of datatype

    // two type : Implecite and Explicite

    // Implecite Typecasting
    // int + char : A= 65 , ans = 75 , int
    cout << 10 + 'A' << endl;

    // int + float : ans = float
    cout << 10 + 10.10 << endl;

    // bool + char : ans = int , bool treat as int 1
    cout << 'B' + true << endl;

    // Explicite typecasing
    cout << (char)30;

    // Eg Average of 5 numbers upto 4 decimal places
    int num1, num2, num3, num4, num5;

    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int sum = num1 + num2 + num3 + num4 + num5;

    cout << fixed << setprecision(4) << (float)sum / 5;

    return 0;
}