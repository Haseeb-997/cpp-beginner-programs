#include <iostream>
using namespace std;

int main()
{
    char ch;
    int n;
    cout <<"\nEnter the number: ";
    cin >> n;
    cin.ignore(10, '\n');
    cout << "\nEnter a character which you want to output the ASCII value of that: ";
    cin.get(ch); // or ch = cin.get();
    cout << "\nThe ASCII value of entered character is: " << int(ch) << "\n\n";
    return 0;
}