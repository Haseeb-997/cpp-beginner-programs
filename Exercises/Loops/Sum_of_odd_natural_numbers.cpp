#include <iostream>
using namespace std;

int main()
{
    int n, i, sum;
    while (true)
    {
        cout << "\nEnter the number: ";
        cin >> n;
        if (n <= 0)
        {
            cout << "\nInvalid Number!\nEnter the valid number\n\n";
        }
        else
        {
            i = 1, sum = 0;
            while (i <= (2 * n - 1))
            {
                sum += i;
                i = i + 2;
            }
            cout << "The sum of first " << n << " term";
            ((n > 1) ? cout << "s of Odd Natural numbers is " : cout << " of Odd Natural numbers is ");
            cout << sum << "\n\n";
            break;
        }
    }
    return 0;
}