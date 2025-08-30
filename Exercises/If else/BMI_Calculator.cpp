#include <iostream>
using namespace std;

int main()
{
    system("cls");
    cout << "***BMI CALCULATOR***\n";
    float bmi, weight, height;
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
            cout << "Obese\n";
        }
        else if (bmi >= 25)
        {
            cout << "Over Weight\n";
        }
        else if (bmi >= 18.5)
        {
            cout << "Normal Weight\n";
        }
        else
        {
            cout << "Under Weight\n";
        }
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}