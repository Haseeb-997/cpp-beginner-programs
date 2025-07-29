#include <iostream>
using namespace std;

int main()
{
    cout << "Program that tell you the frequency of all numbers you have entered\n";
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Number " << i + 1 << " :";
        cin >> arr[i];
    }
    cout << endl;
    cout << endl;

    cout << "Numbers" << "\t\t" << "Frequencies" << endl;

    int f;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -9999) // Sentinal value
        {
            cout << arr[i];
            f = 1;
        }
        
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == -9999) // Sentinal value
            {
                continue;
            }
            else
            {
                if (arr[i] == arr[j])
                {
                    f++;
                    arr[j] = -9999;
                }
            }
        }
        if (arr[i] != -9999)
        {
            cout << "\t\t" << f <<endl;
        }   
    }
    cout << "****Finally i have made it! \"Alhamdulillah\"****" << endl;

    system("pause");
    return 0;
}