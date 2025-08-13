#include <iostream>

int main()
{
    int n, F1 = 0, F2 = 1, F3, i;
    while (true)
    {
        std::cout << "Enter the number: ";
        std::cin >> n;
        if (n <= 0)
        {
            std::cout << "\nInvalid Number!\nEnter the valid number\n\n";
        }
        else
        {
            if (n == 1)
            {
                std::cout << "The 1st term of Fibonacci Series is " << F1 << "\n\n";
                break;
            }
            else if (n == 2)
            {
                std::cout << "The 2nd term of Fibonacci Series is " << F2 << "\n\n";
                break;
            }
            else
            {
                i = 3;
                while (i <= n)
                {
                    F3 = F2 + F1;
                    F1 = F2;
                    F2 = F3;
                    i++;
                }       
                std::cout << "The " << n << "th term of Fibonacci Series is " << F3 << "\n\n";
                break;         
            }
        }
    }    
    return 0;
}