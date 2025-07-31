#include <iostream>
using namespace std;

void f1(int a, int b, int &sum, int &sumsqr, int &diff)
{
    sum = a + b;
    sumsqr = a * a + b * b;
    diff = a - b;
}

int main()
{
    int n1, n2, add, addsqr, sub;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;    

    f1(n1, n2, add, addsqr, sub);

    cout << "\nThe sum of numbers is " << add << endl;
    cout << "The sum of squares of numbers is " << addsqr << endl;
    cout << "The difference of numbers is " << sub << endl;

    system ("pause");
    return 0;
}