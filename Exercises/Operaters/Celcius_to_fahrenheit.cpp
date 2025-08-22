#include <iostream>
using namespace std;

int main()
{
    int celcius;
    float fahrenheit;
    cout << "Enter an integer celcius scale temperature: ";
    cin >> celcius;
    fahrenheit = ((9.0 / 5) * celcius) + 32;
    cout << celcius << " degree celcius = " << fahrenheit << " degree fahrenheit"; 
    return 0;
}