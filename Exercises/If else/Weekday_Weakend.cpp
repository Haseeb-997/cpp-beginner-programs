#include <iostream>

int main()
{
    system("cls");
    std::cout << "***Program that tells whether a day is a weekday or weakend***\n";
    std::cout << "1:\"Monday\"\n";
    std::cout << "2:\"Tuesday\"\n";
    std::cout << "3:\"Wednesday\"\n";
    std::cout << "4:\"Thursday\"\n";
    std::cout << "5:\"Friday\"\n";
    std::cout << "6:\"Saturday\"\n";
    std::cout << "7:\"Sunday\"\n";
    int day;
    bool day_num;
    do
    {
        day_num = 1;
        std::cout << "Enter the number (corresponding day) between 1 and 7: ";
        std::cin >> day;
        if ((day >= 1) && (day <= 7))
        {
            if ((day == 6) || (day == 7))
            {
                std::cout << "\n\"Weekend\"\n\n";
            }
            else
            {
                std::cout << "\n\"Weekday\"\n\n";
            }
        }
        else
        {
            std::cout << "\nInvalid Day Number\n\n";
            day_num = 0;
        }
    } while (day_num == 0);
    system("pause");
    return 0;
}