#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 0, j = n; i <= n; i++, j--)
    {
        cout << j << " ";
    }
    return 0;
}