#include <iostream>
#include <iomanip>

using namespace std;

int totalMarkspSubject(int a, int b)
{
    return a + b;
}

int differenceMarkspSubject(int a, int b)
{
    return a - b;
}

int main()
{
    system("cls");

    cout << "***Program that give you complete analysis of your 9th and 10th class***\n";

    string sub[8] = {"English", "Urdu", "Maths", "Physics", "Chemistry", "Pakistan Studies", "Islamiat", "Computer"};
    int ninth_marks[8], tenth_marks[8], tot_mar_per_sub[8], diff_mar_per_sub[8];

    for (int i = 0; i < 8; i++)
    {
        cout << "Enter your " << sub[i] << " marks you have scored in 9th class: ";
        cin >> ninth_marks[i];
    }
    cout << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << "Enter your " << sub[i] << " marks you have scored in 10th class: ";
        cin >> tenth_marks[i];
    }
    cout << endl;

    for (int i = 0; i < 8; i++)
    {
        tot_mar_per_sub[i] = totalMarkspSubject(ninth_marks[i], tenth_marks[i]);
        diff_mar_per_sub[i] = differenceMarkspSubject(tenth_marks[i], ninth_marks[i]);
    }

    cout << left << setw(20) << "Subjects" << setw(17) << "9th Marks" << setw(17) << "10th Marks" << setw(17) << "Total Marks" << setw(17) << "Analysis" << endl;
    cout << "_______________________________________________________________________________________________________________" << endl << endl;
    
    for (int i = 0; i < 8; i++)
    {
        cout << left << setw(20) << sub[i] << setw(17) << ninth_marks[i] << setw(17) << tenth_marks[i] << setw(17) << tot_mar_per_sub[i];
        if (diff_mar_per_sub[i] == 0)
        {
            cout << "No Change" << endl;
        }
        else if (diff_mar_per_sub[i] > 0)
        {
            cout << "Improved by" << diff_mar_per_sub[i] << " marks" << endl;
        }
        else
        {
            cout << "Decreased by" << diff_mar_per_sub[i] * -1 << "marks less than that in 9th class" << endl;
        }
    }
    cout << "_______________________________________________________________________________________________________________" << endl << endl;

    system("pause");
    return 0;
}