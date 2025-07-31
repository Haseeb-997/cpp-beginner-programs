#include <iostream>
using namespace std;

// Functions Overloading

// Triangle
float volume(float a, float b)
{
    return (1.0 / 2.0) * a * b;
}
// Square
float volume(float a)
{
    return a * a;
}

int myfunc(int a, int b)
{
    return a + b;
}

string myfunc(string a, string b)
{
    return a + b;
}

int main()
{
    float side, base, height_tri, up_side, low_side, height_tra;
    int n1, n2;
    string l_name, f_name;

    cout << "Enter the value of side of square: ";
    cin >> side;
    cout << "The volume of Square (using one argument volume function) is " << volume(side)<< endl << endl;
    
    cout << "Enter the value of base of triangle: ";
    cin >> base;
    cout << "Enter the value of height of triangle: ";
    cin >> height_tri;
    cout << "The volume of Triangle (using two arguments volume function) is " << volume(base, height_tri) << endl << endl;

    cout << "Enter number 1 (whole number): ";
    cin >>  n1;   
    cout << "Enter number 2 (whole number): ";
    cin >> n2;
    cout << "The sum of two numbers (using two arguments myfunc function) is " << myfunc(n1, n2) << endl << endl;

    cout << "Enter first name: ";
    cin >> f_name;
    cout << "Enter last name: ";
    cin >> l_name;
    cout << "The sum of two strings (using two arguments myfunc function) is " << myfunc(f_name, l_name) << endl << endl;

    system ("pause");
    return 0;
}
