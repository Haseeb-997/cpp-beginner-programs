#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << 4.1 << endl << 412.12 << endl << 34.1223 << endl << 2736.234 << endl;
    cout << "Updated Code:\n";
    cout << setw(6) << setfill('-') << 4.1 << endl << setw(7) << setfill('-') << 412.12 << endl << setw(9) << setfill('-') << 34.1223 << endl << 2736.234 << endl;
    return 0;
}