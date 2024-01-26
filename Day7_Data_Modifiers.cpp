#include <iostream>
using namespace std;
int main()
{

    long int number = 121212122112121212; // more than 10^9
    int number_int = number;
    cout << number << endl;
    cout << number_int << endl;

    cout << sizeof(number);
    cout << sizeof(number_int);
    return 0;
}