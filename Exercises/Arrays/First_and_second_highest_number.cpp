#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int num[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Number " << i + 1 << " :";
        cin >> num[i];
    }
    
    cout << endl;
    
    int first_highest_number, second_highest_number;
    first_highest_number = second_highest_number = num[0];
    
    for (int i = 1; i < n; i++)
    {
        if (first_highest_number < num[i])
        {
            second_highest_number = first_highest_number;
            first_highest_number = num[i];
        }
    }
    cout << "The first highest number is " << first_highest_number << endl;
    cout << "The second highest number is " << second_highest_number << endl;

    system("pause");
    return 0;
}