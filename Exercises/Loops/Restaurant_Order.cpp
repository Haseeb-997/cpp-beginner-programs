#include <iostream>
#include <iomanip>
using namespace std;

    // Globle Variables 
    
    // Price variables
    
    // Breakfast items price
    // Puri, Halwa
    int b_1p = 40, b_2p = 80;
    
    // Lunch items price
    // Chicken Korma, Vegetable
    int l_1p = 300, l_2p = 250;
    
    // Fastfood items price
    // Shawarma, Burger
    int f_1p = 150, f_2p = 170;
    
    // Dinner items price
    // Daal Chawal, Nehari
    int d_1p = 100, d_2p = 500;

void breakfast_choice(int bch)
{
    switch (bch)
    {
    case 1:
        cout << "\nYou have selected PURI\n\n";
        system("pause");
        break;
    case 2:
        cout << "\nYou have selected HALWA\n\n";
        system("pause");
        break;
    case 3:
        system("cls");
        cout << "YOU HAVE ORDERED\n\n";
        system("pause");
    case 4:
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
        cout << "\nYou have selected CHICKEN KORMA\n\n";
        system("pause");
        break;
    case 2:
        cout << "\nYou have selected VEGETABLE\n\n";
        system("pause");
        break;
    case 3:
        system("cls");
        cout << "YOU HAVE ORDERED\n\n";
        system("pause");
    case 4:
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
        cout << "\nYou have selected SHAWARMA\n\n";
        system("pause");
        break;
    case 2:
        cout << "\nYou have selected BURGER\n\n";
        system("pause");
        break;
    case 3:
        system("cls");
        cout << "YOU HAVE ORDERED\n\n";
        system("pause");
    case 4:
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
        cout << "\nYou have selected DAAL CHAWAL\n\n";
        system("pause");
        break;
    case 2:
        cout << "\nYou have selected NEHARI\n\n";
        system("pause");
        break;
    case 3:
        system("cls");
        cout << "YOU HAVE ORDERED\n\n";
        system("pause");
    case 4:
        break;
    default:
        cout << "\nInvalid Input!\nEnter valid one\n\n";
        system("pause");
    }
}

int main()
{
    // Choice variables
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
                cout << left << setw(45) << "\"ITEMS\"" << "\"PRICES\"" << "\n";
                cout << setw(45) << "1. PURI" << " Rs." << b_1p << "\n"
                     << setw(45) << "2. HALWA" << " Rs." << b_2p << "\n"
                     << "3. YOUR ORDER\n"
                     << "4. BACK TO MAIN MENU\n\n";
                cout << "Enter your choice(1-4): ";
                cin >> BCH;
                // Calling Function
                breakfast_choice(BCH);
            } while (BCH != 4);
            break;
        case 2:
            do
            {
                system("cls");
                cout << "********************LUNCH********************\n\n";
                cout << left << setw(45) << "\"ITEMS\"" << "\"PRICES\"" << "\n";
                cout << setw(45) << "1. CHICKEN KORMA" << " Rs." << l_1p << "\n"
                     << setw(45) << "2. VEGETABLE" << " Rs." << l_2p << "\n"
                     << "3. YOUR ORDER\n"
                     << "4. BACK TO MAIN MENU\n\n";
                cout << "Enter your choice(1-4): ";
                cin >> LCH;
                // Calling Function
                lunch_choice(LCH);
            } while (LCH != 4);
            break;
        case 3:
            do
            {
                system("cls");
                cout << "********************FAST FOOD********************\n\n";
                cout << left << setw(45) << "\"ITEMS\"" << "\"PRICES\"" << "\n";
                cout << setw(45) << "1. SAHWARMA" << " Rs." << f_1p << "\n"
                     << setw(45) << "2. BURGER" << " Rs." << f_2p << "\n"
                     << "3. YOUR ORDER\n"
                     << "4. BACK TO MAIN MENU\n\n";
                cout << "Enter your choice(1-4): ";
                cin >> FCH;
                // Calling Function
                fastfood_choice(FCH);
            } while (FCH != 4);
            break;
        case 4:
            do
            {
                system("cls");
                cout << "********************DINNER********************\n\n";
                cout << left << setw(45) << "\"ITEMS\"" << "\"PRICES\"" << "\n";
                cout << setw(45) << "1. DAAL CHAWAL" << " Rs." << d_1p << "\n"
                     << setw(45) << "2. NEHARI" << " Rs." << d_2p << "\n"
                     << "3. YOUR ORDER\n"
                     << "4. BACK TO MAIN MENU\n\n";
                cout << "Enter your choice(1-4): ";
                cin >> DCH;
                // Calling Function
                dinner_choice(DCH);
            } while (DCH != 4);
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
