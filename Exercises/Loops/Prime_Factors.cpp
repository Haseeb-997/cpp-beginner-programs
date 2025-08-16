#include <iostream>
using namespace std;

int main()
{
    cout << "***Displaying Prime Factors of a number***\n";
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            if (n % i == 0)
            {
                cout << i << " ";
            }
        }
    }
    cout << "\nAbove are the Prime Factors of " << n << endl;

    system("pause");
    return 0;
}