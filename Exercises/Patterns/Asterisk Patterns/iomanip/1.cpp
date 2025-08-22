#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << endl;
    cout << "#" << setw(5) << setfill('-') << "*" << setw(5) << "#" << endl;
    cout << "#" << setw(6) << setfill('-') << "***" << setw(4) << "#" << endl;
    cout << "#" << setw(7) << setfill('-') << "*****" << setw(3) << "#" << endl;
    cout << "#" << setw(8) << setfill('-') << "*******" << setw(2) << "#" << endl;
    cout << "#" << setw(9) << setfill('-') << "*********" << setw(1) << "#" << endl;
    cout << endl;
    return 0;

}
