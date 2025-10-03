#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    // Extracting one specific bit
    int n, bit_num, result_1;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter bit number which you want to extract: ";
    cin >> bit_num;
    cout << n << " in binary is " << bitset<32>(n) << endl;
    result_1 = (n >> bit_num) & 1;
    cout << "\"" << bit_num << "\" bit of " << n << " is " << result_1 << endl << endl;
    // Extracting least significant bits
    int num, lowest_bits, result_2;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter how many least significant bits you want to extract: ";
    cin >> lowest_bits;
    cout << num << " in binary is " << bitset<32>(num) << endl;
    result_2 = num & ((1 << lowest_bits) - 1);
    cout << "The " << lowest_bits << " lowest bits of " << num << " are " << bitset<32>(result_2) << endl;
    return 0;
}