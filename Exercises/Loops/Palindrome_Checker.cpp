#include <iostream>
#include <cctype>  // tolower, toupper, etc.
#include <cstring> // strlen, etc.

int main()
{
    char ch[50];
    std::cout << "Enter the characters: ";
    std::cin.getline(ch, 50);
    bool isPalindrome = true;
    int i = 0, j = (strlen(ch) - 1);
    while (i < j)
    {
        if (tolower(ch[i]) != tolower(ch[j]))
        {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome)
    {
        std::cout << "Palindrome\n";
    }
    else
    {
        std::cout << "Not a Palindrome\n";
    }
    return 0;
}