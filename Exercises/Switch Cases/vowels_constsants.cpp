#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    switch (ch)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':
        cout << ch << " is a vowel\n\n";
        break;
    default:
        cout << ch << " is a constant\n\n";
        break;
    }

    return 0;
}