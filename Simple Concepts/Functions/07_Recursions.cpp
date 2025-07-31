#include <iostream>
using namespace std;

int fact(int a)
{
    if ((a == 1) || (a == 0))
    {
        return 1;
    }
    else if (a < 0)
    {
        return 0;        
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
    if (!(fact(n)))
    {
        cout << "Invalid Input" << endl;
    }
    else cout << "The factorial of " << n << " is " << fact(n) << endl;

    system("pause");
    return 0;
}
