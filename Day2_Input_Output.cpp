// Pre-Processive Directive : header file
#include <iostream>
using namespace std;
int main()
{
    // variable : contiainer to store data in memory
    int number;

    // Input object use for getting input from user
    cin >> number;

    // Output object use for print inforamtion
    cout << "Entered number :" << number;

    // Eg. Sum of three numbers
    int a, b, c, sum;

    cout << "Enter three number: eg. 1 2 3\n";
    cin >> a >> b >> c;
    sum = a + b + c;
    cout << "Sum : " << sum;

    // success full exicution of program
    return 0;
}