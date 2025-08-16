#include <iostream>
using namespace std;

int main()
{
    cout << "***Displaying Prime Factors of a number***\n";
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int n = num;
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2)
    {
        cout << n;
    }
    cout << "\nAbove are the Prime Factors of " << num << endl;

    system("pause");
    return 0;
}
