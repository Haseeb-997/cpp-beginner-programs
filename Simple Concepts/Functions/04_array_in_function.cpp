#include <iostream>
using namespace std;

void change_array(int arr[5], int n)
{   
    cout << "Inside the function" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << (arr[i] = arr[i] * 3) << " ";
    }
   cout << endl <<endl;
}

int main()
{
    int mynumbers[5] = {2, 4, 6, 8, 10};
    int size_of_array = sizeof(mynumbers) / sizeof(mynumbers[0]);
    
    cout << "Before calling function" << endl;
    for (int i = 0; i < size_of_array; i++)
    {
        cout << mynumbers[i] << " ";
    }
    cout << endl << endl;
    
    change_array(mynumbers, size_of_array);
    
    cout << "After calling function" << endl;
    for (int i = 0; i < size_of_array; i++)
    {
        cout << mynumbers[i] << " ";
    }
    cout << endl << endl;

    system ("pause");
    return 0;
}