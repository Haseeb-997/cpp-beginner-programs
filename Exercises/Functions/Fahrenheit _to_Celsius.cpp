#include <iostream>
using namespace std;

float to_celsius(float f_val)
{
    return 5.0 / 9.0 * (f_val - 32);
}

int main()
{
    cout << "Program that convert Fahrenheit to Celsius scale\n";
    float fahrenheit_val;
    cout << "Enter the temperature in fahrenheit scale: ";
    cin >> fahrenheit_val;    

    cout << fahrenheit_val << "°F is converted into " << to_celsius(fahrenheit_val) << "°C" << endl;

    return 0;
}