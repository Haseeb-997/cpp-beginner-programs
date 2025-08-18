#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, n, remainder;
    cout << "Enter: ";
    cin >> n;
    if (n < 0)
    {
        a = abs(n);
    }
    for (int i = 0; a; i++)
    {
        remainder = a % 10;
        a = a / 10;
        cout << remainder << " ";
    }
    return 0;
}
