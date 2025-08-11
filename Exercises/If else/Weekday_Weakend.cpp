#include <iostream>

int main()
{
    system("cls");
    std::cout << "***Program that tells whether a day is a weekday or weakend***\n";
    std::cout << "1:\"Monday\"\n2:\"Tuesday\"\n3:\"Wednesday\"\n4:\"Thursday\"\n5:\"Friday\"\n6:\"Saturday\"\n7:\"Sunday\"\n";
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
