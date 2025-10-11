#include <iostream>
#include <bitset>
#include <iomanip>
using namespace std;

int main()
{
    int num, bit_num, mask, final;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The bit number you want to change: ";
    cin >> bit_num;
    cout << "The " << bit_num << " bit of " << num << " is " << ((num >> bit_num) & 1) << endl;
    cout << num << " in binary before clearing the " << bit_num << " bit is " << bitset<32>(num) << endl;
    mask = ~(1 << bit_num);
    final = num & mask;
    cout << num << " in binary after clearing the " << bit_num << " bit is " << setw(33) << bitset<32>(final) << endl;
    return 0;
}
