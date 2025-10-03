// This program gives output "1" when both the signs, of two numbers, are different
// and gives output "0" when both the signs, of two numbers, are same.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Last bit of " << a << ", sign bit, is " << (static_cast<unsigned>(a) >> 31) << endl;
    cout << "Last bit of " << b << ", sign bit, is " << (static_cast<unsigned>(b) >> 31) << endl;
    cout << ((static_cast<unsigned>(a) >> 31) ^ (static_cast<unsigned>(b) >> 31));
    return 0;
}