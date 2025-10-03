#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n & 1)
        cout << n << " is an Odd number" << endl;
    else
        cout << n << " is an Even number" << endl;
    return 0;
}