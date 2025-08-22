#include <iostream>
using namespace std;

int main()
{
    float rad, pi = 3.1416, area;
    cout << "Enter the radius of circle: ";
    cin >> rad;
    area = pi * rad * rad;
    cout << "The area of a circle having radius " << rad << " is " << area;
    return 0;
}