#include <iostream>
using namespace std;

int main()
{
    int num, sum, div, rem;
    cout << "Enter the positive number: ";
    cin >> num;
    cout << "Enter the number with which the sum is divided: ";
    cin >> div;
    sum = (num * (num + 1)) / 2;
    rem = sum % div;
    cout << "The sum of numbers from 1 to " << num << " is " << sum << " and remainder when " << sum << " is divided by " << div << " is " << rem;
    return 0;
}