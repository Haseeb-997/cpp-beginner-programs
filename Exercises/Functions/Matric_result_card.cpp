#include <iostream>
#include <iomanip> // to include setw (Manipulator)

#define MAX 75     // "Hey computer, whenever you see the word MAX, just pretend it's the number 75."

// Total marks in 9th and 10th class(in each subject)
int totalMarksperSubject(int a, int b)
{
    return a + b;
}
// Difference of marks of 9th and 10th(class in each subject)
int differenceMarksperSubject(int a, int b)
{
    return b - a;
} 
// Total marks in 9th class
int Sumof9thmarks(int arr[8])
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
    }
    return sum;
}
// Total marks in 10th class
int Sumof10thmarks(int arr[8])
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
    }
    return sum;
}
// Total marks in 9th and 10th class
int Sumof9th10thmarks(int arr[8])
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
    }
    return sum;
}
// Percentage of 9th class
float Percentageof9thmarks(int a)
{
    float per = (a / 550.0) * 100;
    return per;
}
// Percentage of 10th class
float Percentageof10thmarks(int a)
{
    float per = (a / 550.0) * 100;
    return per;
}
// Percentage of 9th and 10th class
float Percentageof9thand10thmarks(int a)
{
    float per = (a / 1100.0) * 100;
    return per;
}
// Difference of percentage of 9th and 10th class
float PercentageatDifference(int a, int b)
{
    return b - a;
}
// Main function
int main()
{
    system("cls");

    std::cout << "***Program that give you complete analysis of your Matric Result***\n\n";
    // Subjects array declaration
    std::string sub[8] = {"English", "Urdu", "Maths", "Physics", "Chemistry", "Pakistan Studies", "Islamiat"};
    // Declaration of variable and arrays--function describe in names
    int group, ninth_marks[8], tenth_marks[8], tot_mar_per_sub[8], diff_mar_per_sub[8];

    // Choosing group
    std::cout << "Group Confirmation\n";
    do
    {
        std::cout << "1. Biology\n";
        std::cout << "2. ICS/Computer\n";
        std::cout << "Enter your choice(1 or 2): ";
        std::cin >> group;
        std::cout << std::endl;
        if ((group == 1) || (group == 2)) // Ternary operator
        {
            sub[7] = (group == 1) ? "Biology" : "Computer";
            break;
        }
        else
            std::cout << "Wrong input...\n\n";
    } while (1);
    // Storing 9th marks in array
    for (int i = 0; i < 8; i++)
    {
        do
        {
            std::cout << "Enter your 9th " << sub[i] << " marks: ";
            std::cin >> ninth_marks[i];
            if (((ninth_marks[i] >= 0) && (ninth_marks[i] <= MAX)))
            {
                break;
            }
            else
                std::cout << "Wrong Input...\n";
        } while (1);
    }
    std::cout << std::endl;
    // Storing 10th marks in array
    for (int i = 0; i < 8; i++)
    {
        do
        {
            std::cout << "Enter your 10th " << sub[i] << " marks: ";
            std::cin >> tenth_marks[i];
            if (((tenth_marks[i] >= 0) && (tenth_marks[i] <= MAX)))
            {
                break;
            }
            else
                std::cout << "Wrong Input...\n";
        } while (1);
    }
    std::cout << std::endl;
    // Storing sum and Difference of 9th and 10th marks in array
    for (int i = 0; i < 8; i++)
    {
        tot_mar_per_sub[i] = totalMarksperSubject(ninth_marks[i], tenth_marks[i]);
        diff_mar_per_sub[i] = differenceMarksperSubject(ninth_marks[i], tenth_marks[i]);
    }
    // Headings
    std::cout << std::left << std::setw(20) << "Subjects" << std::setw(17) << "9th Marks" << std::setw(17) << "10th Marks" << std::setw(22) << "Obtained Marks" << "Analysis" << std::endl;
    std::cout << std::right << std::setw(69) << "in each subject" << std::endl;
    std::cout << "_____________________________________________________________________________________________" << std::endl << std::endl;
    // Contents
    for (int i = 0; i < 8; i++)
    {
        std::cout << std::left << std::setw(20) << sub[i] << std::setw(17) << ninth_marks[i] << std::setw(17) << tenth_marks[i] << std::setw(22) << tot_mar_per_sub[i];
        if (diff_mar_per_sub[i] == 0)
        {
            std::cout << "No Change" << std::endl;
        }
        else if (diff_mar_per_sub[i] > 0)
        {
            std::cout << "Improved by " << diff_mar_per_sub[i] << " marks" << std::endl;
        }
        else
        {
            std::cout << "Decreased by " << diff_mar_per_sub[i] * -1 << " marks" << std::endl;
        }
    }
    std::cout << "_____________________________________________________________________________________________" << std::endl;
    
    // Variables Declaration--function describe in names
    int sum9mar = Sumof9thmarks(ninth_marks), sum10mar = Sumof10thmarks(tenth_marks), sum910mar = Sumof9th10thmarks(tot_mar_per_sub);
    // Variables Declaration--function describe in names
    float ninthPercent = Percentageof9thmarks(float(sum9mar)), tenthPercent = Percentageof10thmarks(float(sum10mar)), totPercent = Percentageof9thand10thmarks(float(sum910mar)), diff_of_per_9_10 = PercentageatDifference(ninthPercent, tenthPercent);

    // Obtained Marks
    std::cout << std::left << std::setw(20) << "Obtained Marks" << std::setw(17) << sum9mar << std::setw(17) << sum10mar << sum910mar << std::endl;
    // Total Marks
    std::cout << std::left << std::setw(20) << "Total Marks" << std::setw(17) << "550" << std::setw(17) << "550" << "1100" << std::endl;
    // Percentages
    std::cout << std::left << std::setw(20) << "Percentage" << std::setw(17) << ninthPercent << std::setw(17) << tenthPercent << totPercent << std::endl << std::endl;

    if (diff_of_per_9_10 == 0)
    {
        std::cout << "--------------------------------" << "No Change in overall percentage" << "--------------------------------" << std::endl << std::endl;
    }

    else if (diff_of_per_9_10 > 0)
    {
        std::cout << "-------------------------------------" << "Improved by " << diff_of_per_9_10 << "% marks" << "------------------------------------" << std::endl << std::endl;
    }
    else
    {
        std::cout << "------------------------------------" << "Decreased by " << diff_of_per_9_10 << "% marks" << "------------------------------------" << std::endl << std::endl;
    }

    system("pause");
    return 0;
} // end of main()
