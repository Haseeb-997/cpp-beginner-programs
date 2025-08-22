#include <iostream>
using namespace std;

int main()
{
    cout << "The program that swap two integers\n";
    cout << "\nSwapping two integers by using third variable\n";
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "\nNumbers before Swap\n";
    cout << "First number = " << a << "\nSecond number = " << b;
    int c = a;
    a = b;
    b = c;
    cout << "\nNumbers after Swap\n";
    cout << "First number = " << a << "\nSecond number = " << b;

    cout << "\n\nSwapping two integers without using third variable\n";
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "\nNumbers before Swap\n";
    cout << "First number = " << x << "\nSecond number = " << y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "\nNumbers after Swap\n";
    cout << "First number = " << x << "\nSecond number = " << y;
    return 0;
}