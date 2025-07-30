#include <iostream>
#include <iomanip> // to include setw
#define MAX 75     // "Hey computer, whenever you see the word MAX, just pretend it's the number 75."
using namespace std;
// Sum total marks in 9th and 10th class in each subject
int totalMarkspSubject(int a, int b)
{
    return a + b;
}
// Difference of marks in 9th and 10th class in each subject
int differenceMarkspSubject(int a, int b)
{
    return b - a;
}
// Sum total marks in 9th class
int Sumof9thmarks(int arr[8])
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
    }
    return sum;
}
// Sum total marks in 10th class
int Sumof10thmarks(int arr[8])
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
    }
    return sum;
}
// Sum total marks in 9th and 10th class
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
float Perof9thmarks(int a)
{
    float per = (a / 550.0) * 100;
    return per;
}
// Percentage of 10th class
float Perof10thmarks(int a)
{
    float per = (a / 550.0) * 100;
    return per;
}
// Percentage of 9th and 10th class
float Perof9th10thmarks(int a)
{
    float per = (a / 1100.0) * 100;
    return per;
}
// Difference of percentage of 9th and 10th class
float PercentDiff(int a, int b)
{
    return b - a;
}
// Main function
int main()
{
    system("cls");

    cout << "***Program that give you complete analysis of your Matric Result***\n\n";
    // Subjects array
    string sub[8] = {"English", "Urdu", "Maths", "Physics", "Chemistry", "Pakistan Studies", "Islamiat"};
    // Declaration of variable and arrays--function describe in names
    int group, ninth_marks[8], tenth_marks[8], tot_mar_per_sub[8], diff_mar_per_sub[8];

    // Choosing group
    cout << "Group Confirmation\n";
    do
    {
        cout << "1. Biology\n";
        cout << "2. ICS/Computer\n";
        cout << "Enter your choice(1 or 2): ";
        cin >> group;
        cout << endl;
        if ((group == 1) || (group == 2)) // Ternary operator
        {
            sub[7] = (group == 1) ? "Biology" : "Computer";
            break;
        }
        else
            cout << "Wrong input...\n\n";
    } while (1);
    // 9th marks stored in array
    for (int i = 0; i < 8; i++)
    {
        do
        {
            cout << "Enter your 9th " << sub[i] << " marks: ";
            cin >> ninth_marks[i];
            if (((ninth_marks[i] >= 0) && (ninth_marks[i] <= MAX)))
            {
                break;
            }
            else
                cout << "Wrong Input...\n";
        } while (1);
    }
    cout << endl;
    // 10th marks stored in array
    for (int i = 0; i < 8; i++)
    {
        do
        {
            cout << "Enter your 10th " << sub[i] << " marks: ";
            cin >> tenth_marks[i];
            if (((tenth_marks[i] >= 0) && (tenth_marks[i] <= MAX)))
            {
                break;
            }
            else
                cout << "Wrong Input...\n";
        } while (1);
    }
    cout << endl;
    // Sum and Difference of 9th and 10th marks stored in array
    for (int i = 0; i < 8; i++)
    {
        tot_mar_per_sub[i] = totalMarkspSubject(ninth_marks[i], tenth_marks[i]);
        diff_mar_per_sub[i] = differenceMarkspSubject(ninth_marks[i], tenth_marks[i]);
    }
    // Headings
    cout << left << setw(20) << "Subjects" << setw(17) << "9th Marks" << setw(17) << "10th Marks" << setw(17) << "Obtained Marks" << setw(17) << "Analysis" << endl;
    cout << right << setw(69) << "in each subject" << endl;
    cout << "_____________________________________________________________________________________________" << endl << endl;
    // Contents
    for (int i = 0; i < 8; i++)
    {
        cout << left << setw(20) << sub[i] << setw(17) << ninth_marks[i] << setw(17) << tenth_marks[i] << setw(17) << tot_mar_per_sub[i];
        if (diff_mar_per_sub[i] == 0)
        {
            cout << "No Change" << endl;
        }
        else if (diff_mar_per_sub[i] > 0)
        {
            cout << "Improved by " << diff_mar_per_sub[i] << " marks" << endl;
        }
        else
        {
            cout << "Decreased by " << diff_mar_per_sub[i] * -1 << " marks" << endl;
        }
    }
    cout << "_____________________________________________________________________________________________" << endl;
    
    // Variables Declaration--function describe in names
    int sum9mar = Sumof9thmarks(ninth_marks), sum10mar = Sumof10thmarks(tenth_marks), sum910mar = Sumof9th10thmarks(tot_mar_per_sub);
    // Variables Declaration--function describe in names
    float ninthPercent = Perof9thmarks(float(sum9mar)), tenthPercent = Perof10thmarks(float(sum10mar)), totPercent = Perof9th10thmarks(float(sum910mar)), diff_of_per_9_10 = PercentDiff(ninthPercent, tenthPercent);

    // Obtained Marks
    cout << left << setw(20) << "Obtained Marks" << setw(17) << sum9mar << setw(17) << sum10mar << setw(17) << sum910mar << endl;
    // Total Marks
    cout << left << setw(20) << "Total Marks" << setw(17) << "550" << setw(17) << "550" << setw(17) << "1100" << endl;
    // Percentages
    cout << left << setw(20) << "Percentage" << setw(17) << ninthPercent << setw(17) << tenthPercent << setw(17) << totPercent << endl << endl;

    if (diff_of_per_9_10 == 0)
    {
        cout << "--------------------------------" << "No Change in overall percentage" << "--------------------------------" << endl << endl;
    }

    else if (diff_of_per_9_10 > 0)
    {
        cout << "-------------------------------------" << "Improved by " << diff_of_per_9_10 << "% marks" << "------------------------------------" << endl << endl;
    }
    else
    {
        cout << "------------------------------------" << "Decreased by " << diff_of_per_9_10 << "% marks" << "------------------------------------" << endl << endl;
    }

    system("pause");
    return 0;
} // end of main()
