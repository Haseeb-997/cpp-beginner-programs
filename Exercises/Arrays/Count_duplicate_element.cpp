#include <iostream>
using namespace std;

int main()
{
    cout << "Note!\nThis code doesn't tell which numbers are duplicated, just how many elements were duplicated after first appearance.\n";
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
    cout << endl;    

    cout << "Numbers" << "\t\t" << "Duplicates" << endl;

    int duplicates;
    for (int i = 0; i < n; i++)
    {
        if (num[i] != -9999)
        {
            cout << num[i];
            duplicates = 0;
        }
        
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] == -9999) // Sentinal value
            {
                continue;
            }
            else
            {
                if (num[i] == num[j])
                {
                    duplicates++;
                    num[j] = -9999;
                }
            }         
        }
        if (num[i] != -9999)
        {
            cout << "\t\t" << duplicates <<endl;
        }
    }

    system("pause");
    return 0;
}