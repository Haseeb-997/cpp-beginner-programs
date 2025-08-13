#include <iostream>

int main()
{
    int n, F1 = 0, F2 = 1, F3, i, sum;
    while (true)
    {
        std::cout << "\nEnter the number: ";
        std::cin >> n;
        if (n <= 0)
        {
            std::cout << "\nInvalid Number!\nEnter the valid number\n\n";
        }
        else
        {
            if (n == 1)
            {
                sum = F1;
            }
            else if (n == 2)
            {
                sum = F1 + F2;
            }
            else
            {
                F1 = 0, F2 = 1, i = 3;
                sum = F1 + F2;
                while (i <= n)
                {
                    F3 = F2 + F1;
                    sum += F3;
                    F1 = F2;
                    F2 = F3;
                    i++;
                }
            }
            std::cout << "\nThe sum of first " << n << " term";
            ((n > 1) ? std::cout << "s of Fibonacci Series is " : std::cout<< " of Fibonacci Series is ");
            std::cout << sum << "\n\n";
            break;
        }
    }
    return 0;
}