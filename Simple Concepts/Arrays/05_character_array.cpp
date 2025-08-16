#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // char ch[] = {'A', 'B', '\0', 'C', 'D'};
    // cout << ch << endl; // AB
    
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << ch[i] << " "; // A B  C D
    // }
    // cout << endl;

    // char ch[] = "AB0CD";
    // ch[2] = '\0';
    // cout << ch; // AB
    char name[20], fname[20];
    int i;
    cout << "Enter your name: ";
    cin.getline(name, 20); // Store 19 characters
    cout << "Your name is " << name << endl;
    for (i = 0; name[i] != '\0'; i)
    {
        i++;
    }
    cout << "Number of characters in your name: " << i << endl;
    cout << "Enter your Father name: ";
    cin.getline(fname, 20); // Store 19 characters
    cout << "Your Father name is " << fname << endl;
    cout << "Number of characters in your Father name: " << strlen(fname) << endl;
    return 0;
}