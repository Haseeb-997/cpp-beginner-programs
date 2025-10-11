#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    short num, a, b, mask, k, final;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter how many bits you want to rotate: ";
    cin >> k;
    cout << num << " in binary is " << bitset<16>(num) << endl;
    a = num >> (sizeof(num) * 8 - k);
    b = num << (sizeof(num) * 8 - k);
    mask = (((1 << (sizeof(num) * 8 - (k * 2))) - 1) << k);
    final = (mask & num) | (a | b);
    cout << "After rotating " << k << " bits " << bitset<16>(final) << endl;
    return 0;
}