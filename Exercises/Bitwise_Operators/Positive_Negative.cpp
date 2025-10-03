#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Last bit, sign bit, is " << (static_cast<unsigned>(n) >> 31) << endl;
    if (n == 0)
        cout << n << " is neither Positive nor Negative number" << endl;
    else if (static_cast<unsigned>(n) >> 31)
        cout << n << " is a Negative number" << endl;
    else
        cout << n << " is a Positive number" << endl;
    return 0;
}