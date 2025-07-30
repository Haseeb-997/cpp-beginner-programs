#include <iostream>
using namespace std;

int fact(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
    {
        return (a * fact(a - 1));
    }
}

int main()
{
    cout << "\nFactorial\n";
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The factorial of " << n << " is " << fact(n) << endl;

    system("pause");
    return 0;
}