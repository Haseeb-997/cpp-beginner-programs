#include <iostream>
using namespace std;

float half(float n)
{
    return n / 2;
}

int main()
{
    cout << "Program that give you the half of the numbers\n";
    int n1, n2;
    cout << "Enter starting whole number: ";
    cin >> n1;
    cout << "Enter ending whole number: ";
    cin >> n2;
    cout << endl;

    for (float i = n1; i <= n2; i++)
    {
        cout << "Half of the " << i << " is " << half(i) << endl;  
    }    
    return 0;
}