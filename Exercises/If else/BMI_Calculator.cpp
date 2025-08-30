#include <iostream>
using namespace std;

int main()
{
    system("cls");
    cout << "***BMI CALCULATOR***\n";
    float bmi, weight, height;
    int again;
    do
    {
        again = 1;
        cout << "Enter the weight in kg: ";
        cin >> weight;
        cout << "Enter the height in m: ";
        cin >> height;
        if ((weight > 0) && (height > 0))
        {
            bmi = weight / (height * height);
            cout << "Your BMI is " << bmi << endl;
            if (bmi >= 30)
            {
                cout << "Category: \"Obese\"\n\n";
            }
            else if (bmi >= 25)
            {
                cout << "Category: \"Over Weight\"\n\n";
            }
            else if (bmi >= 18.5)
            {
                cout << "Category: \"Normal Weight\"\n\n";
            }
            else
            {
                cout << "Category: \"Under Weight\"\n\n";
            }
            cout << "If you want to calculate again: Press 1\nIf you want to exit: Press 2\n";
            cin >> again;
            cout << endl;
            if (again == 2)
            {
                break;
            }
        }
        else
        {
            cout << "\nInvalid Input!Please enter the positive values\n\n";
        }
    } while (again == 1);
    cout << "***Thanks for using***\n";
    return 0;
}
