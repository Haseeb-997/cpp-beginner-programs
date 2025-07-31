#include <iostream>
#include <stack> // including header file of stacks
using namespace std;

int main()
{
    stack<string> cars; // stack declaration
    cars.push("BMW");
    cars.push("Mazda");
    cars.push("Bughati");
    cars.push("Corolla"); // at top ---- last in
    cout << "Before changing, car at the top (in the stack) is " << cars.top() << endl;
    cars.top() = "Volvo"; // changing top element of stack
    cout << "After changing, car at the top (in the stack) is " << cars.top() << endl;
    cout << "The size of the car stack is " << cars.size() << endl;
    
    stack<int> numbers;
    numbers.push(10);    
    numbers.push(20);
    numbers.push(30);
    numbers.push(40);
    numbers.push(50); // at top ---- last in
    cout << "The size of the numbers stack is " << numbers.size() << endl;
    cout << "Before removing, number at the top (in the stack) is " << numbers.top() << endl;
    numbers.pop(); // removing top element of stack
    cout << "After removing, number at the top (in the stack) is " << numbers.top() << endl;

    system ("pause");
    return 0;
}
