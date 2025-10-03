// This program calculate the x times (x = 2^n) of a number
// by using Bitwise operator
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << " * 2 = " << (n << 1) << endl;
    cout << n << " * 4 = " << (n << 2) << endl;
    cout << n << " * 8 = " << (n << 3) << endl;
    return 0;
}