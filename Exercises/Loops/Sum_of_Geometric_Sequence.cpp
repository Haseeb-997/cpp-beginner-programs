#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "\nThe program that tell you the sum of Geometric Sequence\n";
    int number_of_terms;
    double common_ratio, first_term, sum;
    cout << "\nEnter the First term: ";
    cin >> first_term;
    cout << "\nEnter the Common Ratio: ";
    cin >> common_ratio;
    while (true)
    {
        cout << "\nEnter the number of terms in series: ";
        cin >> number_of_terms;
        if (number_of_terms <= 0)
        {
            cout << "\nInvalid Number Of Terms!\nEnter the valid one\n\n";
        }
        else
        {
            sum = 0;
            int i = 0;
            while (i <= number_of_terms - 1)
            {
                sum += (first_term * pow(common_ratio, i));
                i++;
            }
            break;
        }
    }
    cout << "\nThe sum of Geometric Sequence is " << sum << "\n\n";
    return 0;
}