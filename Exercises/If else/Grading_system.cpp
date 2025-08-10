#include <iostream>

int main()
{
    float percent;
    std::cout << "*****Welcome to the FBISE Grading System*****\n";
    do
    {
        std::cout << "\nEnter your percentage: ";
        std::cin >> percent;
        std::cout << std::endl;
        if ((percent > 100) || (percent < 0))
        {
            std::cout << "Invalid Percentage\nPlease enter correct!\n\n";
        }
        else
        {
            break;
        }                
    } while (1);

    if (percent >= 95) // 95 to 100
    {
        std::cout << "Your Grade is A++\n";
    }
    else if (percent >= 90) // 90 to less than 95
    {
        std::cout << "Your Grade is A+\n";
    }
    else if (percent >= 85) // 85 to less than 90
    {
        std::cout << "Your Grade is A\n";
    }
    else if (percent >= 80) // 80 to less than 85
    {
        std::cout << "Your Grade is B++\n";
    }
    else if (percent >= 75) // 75 to less than 80
    {
        std::cout << "Your Grade is B+\n";
    }
    else if (percent >= 70) // 70 to less than 75
    {
        std::cout << "Your Grade is B\n";
    }
    else if (percent >= 60) // 60 to less than 70
    {
        std::cout << "Your Grade is C\n";
    }
    else if (percent >= 50) // 50 to less than 60
    {
        std::cout << "Your Grade is D\n";
    }
    else if (percent >= 40) // 40 to less than 50
    {
        std::cout << "Your Grade is E\n";
    }
    else if (percent >= 0) // 0 to less than 40
    {
        std::cout << "Your Grade is U\n";
    }

    system("pause");
    return 0;
}
