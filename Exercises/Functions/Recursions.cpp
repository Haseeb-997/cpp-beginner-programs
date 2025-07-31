#include <iostream>
using namespace std;

int fib(int a)
{
    if (a < 0)
    {
        return 0;
    }
    else if ((a == 0) || (a == 1))
    {
        return 1;
    }
    else return fib(a - 1) + fib(a - 2);
}

int main()
{
    int index;
    cout << "\nProgram that will tell you the term at given index of \"fibonacci series\"\n\n";
    cout << "Enter the value of index: ";
    cin >> index;
    if (!(fib(index)))
    {
        cout << "Wrong Input" << endl;
    }
    else cout << "The term at " << index << " index or " << index + 1 << "th term is " << fib(index) << endl << endl;

    system ("pause");
    return 0;
}