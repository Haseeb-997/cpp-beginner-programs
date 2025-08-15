#include <iostream>
using namespace std;

int main()
{
    /*
    1 
    1 2 
    1 2 3 
    1 2 3 4
    */
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";       
        }
        cout << endl;
    }
    cout << endl;
    
    /*
    1 
    2 2 
    3 3 3 
    4 4 4 4
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";       
        }
        cout << endl;
    }
    cout << endl;

    /*
    1 
    2 3 
    4 5 6 
    7 8 9 10
    */
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << x << "\t";
            x++;   
        }
        cout << endl;
    }
    cout << endl;

    /*
    1
    2 3
    3 4 5
    4 5 6 7
    */
   for (int i = 1; i <= n; i++)
   {
        int x = i;
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x++;   
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}