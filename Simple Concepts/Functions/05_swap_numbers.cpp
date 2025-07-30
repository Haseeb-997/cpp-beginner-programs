#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    cout << "Program that swap two numbers\n";
    int n1, n2;
    cout << "Enter number 1: ";
    cin >> n1;    
    cout << "Enter number 2: ";
    cin >> n2;
    cout << "\nNumbers before swap:\n";
    cout << "Number 1 is \"" << n1 << "\" and Number 2 is \"" << n2 << "\"" << endl;
    
    swap(n1, n2);

    cout << "\nNumbers after swap:\n";
    cout << "Number 1 is \"" << n1 << "\" and Number 2 is \"" << n2 << "\"" << endl;
    system ("pause");
    return 0;
}