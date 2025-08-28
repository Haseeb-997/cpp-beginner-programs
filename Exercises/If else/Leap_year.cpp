#include <iostream>

int main()
{
    int year;
    std::cout << "\n***The program that will tell you whether the year is \"leap\" or not***\n\n";
    while (true)
    {
        std::cout << "Enter the year: ";
        std::cin >> year;
        if (year > 1582)
        {
            if (year % 4 == 0)
            {
                if (year % 100 != 0)
                {
                    std::cout << "\n" << year << " is a Leap Year\n\n";
                }
                else if ((year % 100 == 0) && (year % 400 == 0))
                {
                    std::cout << "\n" << year << " is a Leap Year\n\n";
                }
                else
                {
                    std::cout << "\n" << year << " is not a Leap Year\n\n";
                }
                break;
            }
            else
            {
                std::cout << "\n" << year << " is not a Leap Year\n\n";
            }
            break;
        }
        else
        {
            std::cout << "\nInvalid Year\nEnter a valid year!\n\n";
        }
    }
    return 0;

}
