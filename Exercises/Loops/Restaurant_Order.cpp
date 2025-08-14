#include <iostream>
using namespace std;

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
                cout << "1. PURI\n2. HALWA\n3. LACHCHA PARATHA\n4. OMELETTE\n5. HALF FRY EGG\n6. TEA\n7. LASSI\n8. DAHI\n9. WATER\n10. BACK TO MAIN MENU\n\n";
                cout << "Enter your choice(1-10): ";
                cin >> BCH;
                switch (BCH)
                {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 7:
                    break;
                case 8:
                    break;
                case 9:
                    break;
                case 10:
                    break;
                default:
                    cout << "\nInvalid Input!\nEnter valid one\n\n";
                    system("pause");
                }
            } while (BCH != 10);
            break;
        case 2:
            do
            {
                system("cls");
                cout << "********************LUNCH********************\n\n";
                cout << "1. CHICKEN KORMA\n2. VEGETABLE\n3. MIX DAAL\n4. CURRY PAKORA\n5. ALU KOFTA\n6. ALU KEEMA\n7. NAAN/ROTI\n8. COLD DRINKS\n9. SALAD\n10. BACK TO MAIN MENU\n\n";
                cout << "Enter your choice(1-10): ";
                cin >> LCH;
                switch (LCH)
                {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 7:
                    break;
                case 8:
                    break;
                case 9:
                    break;
                case 10:
                    break;
                default:
                    cout << "\nInvalid Input!\nEnter valid one\n\n";
                    system("pause");
                }
            } while (LCH != 10);
            break;
        case 3:
            do
            {
                system("cls");
                cout << "********************FAST FOOD********************\n\n";
                cout << "1. SAHWARMA\n2. BURGER\n3. WRAPS\n4. PIZZA\n5. FRIES\n6. CHICKEN WINGS\n7. AFGHANI FRIES\n8. SAMOSA CHAAT\n9. SODA\n10. BACK TO MAIN MENU\n\n";
                cout << "Enter your choice(1-10): ";
                cin >> FCH;
                switch (FCH)
                {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 7:
                    break;
                case 8:
                    break;
                case 9:
                    break;
                case 10:
                    break;
                default:
                    cout << "\nInvalid Input!\nEnter valid one\n\n";
                    system("pause");
                }
            } while (FCH != 10);
            break;
        case 4:
            do
            {
                system("cls");
                cout << "********************DINNER********************\n\n";
                cout << "1. DAAL CHAWAL\n2. NEHARI\n3. DHALEEM\n4. MALAI BOTI\n5. SEAKH KABAB\n6. BEAF KARAHI\n7. RAITA\n8. NAAN/ROTI\n9. SALAD\n10. BACK TO MAIN MENU\n\n";
                cout << "Enter your choice(1-10): ";
                cin >> DCH;
                switch (DCH)
                {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 7:
                    break;
                case 8:
                    break;
                case 9:
                    break;
                case 10:
                    break;
                default:
                    cout << "\nInvalid Input!\nEnter valid one\n\n";
                    system("pause");
                }
            } while (DCH != 10);
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