#include <iostream>
using namespace std;

int main()
{
    /*
    A 
    B B 
    C C C 
    D D D D
    */
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";       
        }
        ch++;
        cout << endl;
    }
    cout << endl;
    
    /*
    A 
    A B 
    A B C 
    A B C D
    */
   for (int i = 1; i <= n; i++)
   {
        char alp = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << alp << " ";
            alp++;     
        }
        cout << endl;
    }
    cout << endl;

    /*
    A 
    B C 
    D E F 
    G H I J
    */
    char y = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << y << " ";
            y++;   
        }
        cout << endl;
    }
    cout << endl;

    /*
    A
    B C
    C D E
    D E F G
    */
   for (int i = 1; i <= n; i++)
   {
        char z = i + 64;
        for (int j = 1; j <= i; j++)
        {
            cout << z << " ";
            z++;   
        }
        cout << endl;
    }
    cout << endl;
    return 0;

}
