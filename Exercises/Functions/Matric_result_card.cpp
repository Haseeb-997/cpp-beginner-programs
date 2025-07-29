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

int Sumof9thmarks(int arr[8])
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
    }
    return sum;   
}

int Sumof10thmarks(int arr[8])
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int Sumof9th10thmarks(int arr[8])
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float Perof9thmarks(int a)
{
    float per = (a / 550.0) * 100;
    return per;    
}

float Perof10thmarks(int a)
{
    float per = (a / 550.0) * 100;
    return per;        
}

float Perof9th10thmarks(int a)
{
    float per = (a / 1100.0) * 100;
    return per;        
}

int main()
{
    system("cls");

    cout << "***Program that give you complete analysis of your 9th and 10th class***\n";

    string sub[8] = {"English", "Urdu", "Maths", "Physics", "Chemistry", "Pakistan Studies", "Islamiat", "Computer"};
    int ninth_marks[8], tenth_marks[8], tot_mar_per_sub[8], diff_mar_per_sub[8];

    for (int i = 0; i < 8; i++)
    {
        cout << "Enter your 9th " << sub[i] << " marks: ";
        cin >> ninth_marks[i];
    }
    cout << endl;

    for (int i = 0; i < 8; i++)
    {
        cout << "Enter your 10th " << sub[i] << " marks: ";
        cin >> tenth_marks[i];
    }
    cout << endl;

    for (int i = 0; i < 8; i++)
    {
        tot_mar_per_sub[i] = totalMarkspSubject(ninth_marks[i], tenth_marks[i]);
        diff_mar_per_sub[i] = differenceMarkspSubject(tenth_marks[i], ninth_marks[i]);
    }

    cout << left << setw(20) << "Subjects" << setw(17) << "9th Marks" << setw(17) << "10th Marks" << setw(17) << "Obtained Marks" << setw(17) << "Analysis" << endl;
    cout << "____________________________________________________________________________________________________________________" << endl << endl;
    
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
            cout << "Decreased by " << diff_mar_per_sub[i] * -1 << "marks less than that in 9th class" << endl;
        }
    }
    cout << "____________________________________________________________________________________________________________________" << endl << endl;

    cout << left << setw(20) << "Total Marks" << setw(17) << "550" << setw(17) << "550" << setw(17) << "1100" <<endl; 

    int sum9mar = Sumof9thmarks(ninth_marks), sum10mar = Sumof10thmarks(tenth_marks), sum910mar = Sumof9th10thmarks(tot_mar_per_sub);

    cout << left << setw(20) << "Obtained Marks" << setw(17) << sum9mar << setw(17) << sum10mar << setw(17) << sum910mar <<endl;

    cout << left << setw(20) << "Percentage" << setw(17) << Perof9thmarks(float(sum9mar)) << setw(17) << Perof10thmarks(float(sum10mar)) << setw(17) << Perof9th10thmarks(float(sum910mar)) << endl << endl;
    
    if (Perof10thmarks(float(sum10mar)) < Perof9thmarks(float(sum9mar)))
    {
        cout << "Decreased by " << (Perof9thmarks(float(sum9mar)) - Perof10thmarks(float(sum10mar))) << "% marks" << endl << endl;
    }

    else if (Perof10thmarks(float(sum10mar)) > Perof9thmarks(float(sum9mar)))
    {
        cout << "Improved by " << (Perof10thmarks(float(sum10mar)) - Perof9thmarks(float(sum9mar))) << "% marks" << endl << endl;    
    }
    else
    {
        cout << "No Change" << endl << endl;
    }      

    system("pause");
    return 0;
}
