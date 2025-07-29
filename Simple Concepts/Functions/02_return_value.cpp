#include <iostream>
using namespace std;

int sum(int a, int b);// Function prototype

int main()
{
    int n1, n2;
    cout << "Enter number 1: ";
    cin >> n1;
    cout << "Enter number 2: ";
    cin >> n2;
    // n1 and n2 aur "actual parameters"
    cout << "The sum is " << sum(n1, n2);
    return 0;
}
// "Formal parameters" [a and b] are taking values from actual parameters
int sum(int a, int b)
{
    return a + b;
}