#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a three digit number: ";
    cin >> num;
    int a = num / 100;
    num = num % 100;
    int b = num / 10;
    int c = num % 10;
    int sum = a + b + c;
    cout << a << " + " << b << " + " << c << " = " << sum;
    cout << "\n\nIf you have entered more than three digit number you will get the wrong output";
    return 0;
}