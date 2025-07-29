#include <iostream>
using namespace std;

// Functions
void myFunc()
{
    cout << "My first function." << endl;
}

void info(string fname, int age)
{
    cout << "M." << fname << " " << age << " years old." << "\t\t";
}

void place(string country = "Pakistan") // default value of function is Pakistan
{
    cout << "My country: " << country << endl;
}

int main()
{
    // Calling functions
    myFunc();
    info("Haseeb", 18);
    info("Saad", 16);
    cout << endl;
    place("Saudia Arabia");
    place();
    place("Iraq");
    return 0;
}