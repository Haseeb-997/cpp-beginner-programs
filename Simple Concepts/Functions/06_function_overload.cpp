#include <iostream>
using namespace std;

// Functions Overloading

// Trapazoid
float volume(float a, float b, float c)
{
    return ((a + b) / 2) * c;
}
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

int main()
{
    float side, base, height_tri, up_side, low_side, height_tra;
    cout << "Volume of Shapes\n\n";

    cout << "Enter the value of side of square: ";
    cin >> side;
    cout << "The volume of Square (using one argument function) is " << volume(side)<< endl << endl;
    
    cout << "Enter the value of base of triangle: ";
    cin >> base;
    cout << "Enter the value of height of triangle: ";
    cin >> height_tri;
    cout << "The volume of Triangle (using two arguments function) is " << volume(base, height_tri) << endl << endl;

    cout << "Enter the value of upper side of trapazoid: ";
    cin >> up_side;
    cout << "Enter the value of lower side of trapazoid: ";
    cin >> low_side;
    cout << "Enter the value of height of trapazoid: ";
    cin >> height_tra;
    cout << "The volume of Trapazoid (using three arguments function) is " << volume(up_side, low_side, height_tra) << endl << endl;

    system ("pause");
    return 0;
}
