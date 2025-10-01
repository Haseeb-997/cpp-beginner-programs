#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int meal_choice, food_choice, quantity;
    cout << "********Welcome to our FAST Restaurant********" << endl;
    cout << "Either you want to Eat Food or Drink Shakes/Cold Drinks\nSelect one of them (1, 2 or 3)" << endl;
    cout << "---------" << endl;
    cout << "1. Food\n2. Drinks\n3. Quit" << endl;
    cout << "---------" << endl;
    cin >> meal_choice;
    switch (meal_choice)
    {
        case 1:
            {
                cout << "\nSelect item you like" << endl;
                cout << "--------------------" << endl;
                cout << "1. Pizza" << setw(11) << "Rs. 100/-" << endl << "2. Burger" << setw(10) << "Rs. 200/-" << endl;
                cout << "--------------------" << endl;
                cin >> food_choice;
                switch (food_choice)
                {
                    case 1:
                        cout << "\nHow many Pizza(s) you want to order?" << endl;
                        cin >> quantity;
                        cout << "\nYou have ordered " << quantity << " Pizza(s)\nYour total Bill is Rs." << quantity * 100 << "/-" << endl;
                        break;
                    case 2:
                        cout << "\nHow many Bugers(s) you want to order?" << endl;
                        cin >> quantity;
                        cout << "\nYou have ordered " << quantity << " Burger(s)\nYour total Bill is Rs." << quantity * 200 << "/-" << endl;
                        break;
                    default:
                        cout << "\nInvalid Input\nYou have to enter the number from 1 to 2" << endl;
                }
            }
            break;
        case 2:
            {
                cout << "\nSelect item you like" << endl;
                cout << "--------------------" << endl;
                cout << "1. Tea" << setw(13) << "Rs. 300/-" << endl << "2. Coffee" << setw(10) << "Rs. 240/-" << endl;
                cout << "--------------------" << endl;
                cin >> food_choice;
                switch (food_choice)
                {
                    case 1:
                        cout << "\nHow many cup(s) of Tea you want to order?" << endl;
                        cin >> quantity;
                        cout << "\nYou have ordered " << quantity << " cup(s) of Tea\nYour total Bill is Rs." << quantity * 300 << "/-" << endl;
                        break;
                    case 2:
                        cout << "\nHow many cup(s) of Coffee you want to order?" << endl;
                        cin >> quantity;
                        cout << "\nYou have ordered " << quantity << " cup(s) of Coffee\nYour total Bill is Rs." << quantity * 240 << "/-" << endl;
                        break;
                    default:
                        cout << "\nInvalid Input\nYou have to enter the number from 1 to 2" << endl;
                }
            }
            break;
        case 3:
            cout << "You have Quit the Restaurant" << endl;
            break;
        default:
            cout << "\nInvalid Input\nYou have to enter the number from 1 to 3" << endl;
    }
    if (((meal_choice == 1) || (meal_choice == 2)) && ((food_choice == 1) || (food_choice == 2)))
        cout << "\n********Thanks for Ordering********" << endl;
    return 0;
}