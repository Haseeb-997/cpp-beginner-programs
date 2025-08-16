#include <iostream>
#include <iomanip>
using namespace std;

void breakfast_choice(int bch)
{
    switch (bch)
    {
    case 1:
        system("pause");
        break;
    case 2:
        system("pause");
        break;
    case 3:
        break;
    default:
        cout << "\nInvalid Input!\nEnter valid one: \n\n";
        system("pause");
    }
}

void lunch_choice(int lch)
{
    switch (lch)
    {
    case 1:
        system("pause");
        break;
    case 2:
        system("pause");
        break;
    case 3:
        break;
    default:
        cout << "\nInvalid Input!\nEnter valid one\n\n";
        system("pause");
    }
}

void fastfood_choice(int fch)
{
    switch (fch)
    {
    case 1:
        system("pause");
        break;
    case 2:
        system("pause");
        break;
    case 3:
        break;
    default:
        cout << "\nInvalid Input!\nEnter valid one\n\n";
        system("pause");
    }
}

void dinner_choice(int dch)
{
    switch (dch)
    {
    case 1:
        system("pause");
        break;
    case 2:
        system("pause");
        break;
    case 3:
        break;
    default:
        cout << "\nInvalid Input!\nEnter valid one\n\n";
        system("pause");
    }
}

int main()
{
    int RCH, BCH, LCH, FCH, DCH;
    do
    {
        system("cls");
        cout << "********************RESTAURANT********************\n\n";
        cout << "1. BREAKFAST\n2. LUNCH\n3. FAST FOOD\n4. DINNER\n5. EXIT\n\n";
        cout << "Enter your choice(1-5): ";
        cin >> RCH;
        switch (RCH)
        {
        case 1:
            do
            {
                system("cls");
                cout << "********************BREAKFAST********************\n\n";
                cout << left << setw(30) << "\"ITEMS\"" << setw(30) << "\"PRICES\"" << "\n";
                cout << setw(30) << "1. PURI" << " Rs.10/-" << "\n"
                     << setw(30) << "2. HALWA" << " Rs.90/Pao" << "\n"
                     << "3. BACK TO MAIN MENU" << "\n\n";
                cout << "Enter your choice(1-3): ";
                cin >> BCH;
                breakfast_choice(BCH);
            } while (BCH != 3);
            break;
        case 2:
            do
            {
                system("cls");
                cout << "********************LUNCH********************\n\n";
                cout << left << setw(30) << "\"ITEMS\"" << setw(30) << "\"PRICES\"" << "\n";
                cout << setw(30) << "1. CHICKEN KORMA" << " Rs.550/-" << "\n"
                     << setw(30) << "2. VEGETABLE" << " Rs.250/-" << "\n"
                     << "3. BACK TO MAIN MENU" << "\n\n";
                cout << "Enter your choice(1-3): ";
                cin >> LCH;
                lunch_choice(LCH);
            } while (LCH != 3);
            break;
        case 3:
            do
            {
                system("cls");
                cout << "********************FAST FOOD********************\n\n";
                cout << left << setw(30) << "\"ITEMS\"" << setw(30) << "\"PRICES\"" << "\n";
                cout << setw(30) << "1. SAHWARMA" << " Rs.200/-" << "\n"
                     << setw(30) << "2. BURGER" << " Rs.200/-" << "\n"
                     << "3. BACK TO MAIN MENU" << "\n\n";
                cout << "Enter your choice(1-3): ";
                cin >> FCH;
                fastfood_choice(FCH);
            } while (FCH != 3);
            break;
        case 4:
            do
            {
                system("cls");
                cout << "********************DINNER********************\n\n";
                cout << left << setw(30) << "\"ITEMS\"" << setw(30) << "\"PRICES\"" << "\n";
                cout << setw(30) << "1. DAAL CHAWAL" << " Rs.250/-" << "\n"
                     << setw(30) << "2. NEHARI" << " Rs.450/-" << "\n"
                     << "3. BACK TO MAIN MENU" << "\n\n";
                cout << "Enter your choice(1-3): ";
                cin >> DCH;
                dinner_choice(DCH);
            } while (DCH != 3);
            break;
        case 5:
            break;
        default:
            cout << "\nInvalid Input!\nEnter valid one\n\n";
            system("pause");
        }
    } while (RCH != 5);

    return 0;
}
