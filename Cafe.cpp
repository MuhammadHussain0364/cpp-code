#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    system("cls");
    system("Color 0A");

    int choice, price, quantity, totalPrice, pin, N, n, menu;
    char press;

    cout << "                                          *::Welcome to the cafeteria::*                   " << endl;
    cout << "                                             {:::INSTRUCTIONS:::}                " << endl;
    cout << "1 = Keep our cafeteria clean." << endl;
    cout << "2 = Smoking is prohibited." << endl;
    cout << "3 = Keep silence." << endl;
    cout << "                    ::Thanks::                        " << endl;
    cout << "Your reserved seat: " << endl;
    cout << "Press 'a' for VIP class " << endl;
    cout << "Press 'b' for b class " << endl;
    cout << "Press 'c' for c class" << endl;
    cout << "Press 'd' for d class" << endl;
    cin >> press;
    system("cls");

    if (press == 'a')
    {
        cout << "You selected VIP (A Class)." << endl;
        cout << ":::Your Cabin A :::" << endl;
        cout << "How many seats do you want?" << endl;
        cout << "charges of per seat in VIP system is :\n1000 " << endl;
        cout << "Please enter a numeric value: ";
        cin >> n;
        system("cls");
    }
    else if (press == 'b')
    {
        cout << "You selected  b Class)." << endl;
        cout << ":::Your Cabin b :::" << endl;
        cout << "How many seats do you want?" << endl;
        cout << "charges of per seat in Local class is :\n500" << endl;
        cout << "Please enter a numeric value: ";
        cin >> n;
        system("cls");
    }
    else if (press == 'c')
    {
        cout << "You selected  c Class)." << endl;
        cout << ":::Your Cabin c :::" << endl;
        cout << "How many seats do you want?" << endl;
        cout << "charges of per seat in Local class is :\n250" << endl;
        cout << "Please enter a numeric value: ";
        cin >> n;
        system("cls");
    }
    else if (press == 'd')
    {
        cout << "You selected  d Class)." << endl;
        cout << ":::Your Cabin d :::" << endl;
        cout << "How many seats do you want?" << endl;
        cout << "charges of per seat in Local class is :\n"<< endl;
        cout << "Please enter a numeric value: ";
        cin >> n;
        system("cls");
    }
    else
    {
        cout << "Invalid selection!" << endl;
        return 0;
    }

    {
        cout << "Then, a person who enters the cafe is a customer or an admin?" << endl;
        cout << "Press 1 if you are a customer. " << endl;
        cout << "Press 2 if you are an admin." << endl;
        cin >> choice;
        system("cls");
    }

    if (choice == 2)
    {
    pin:
        cout << "Enter pin: ";
        cin >> pin;

        if (pin == 123)

        {

            cout << "Welcome Admin! Here is the MENU:" << endl;
        menu:
            cout << "All items are: " << endl;
            cout << " = Burger" << endl;
            cout << " = Pizza" << endl;
            cout << " = Soda" << endl;
            cout << " = Salad" << endl;
            cout << " = samosa" << endl;
            cout << " = rotti+korma" << endl;
            cout << " = rotti+sallan" << endl;
            cout << " = rolls" << endl;
            cout << " = Sandwich" << endl;
            cout << "Prices for all items: " << endl;
            cout << "=200" << endl;
            cout << "=300" << endl;
            cout << "=120" << endl;
            cout << "=400" << endl;
            cout << "=320" << endl;
            cout << "=420" << endl;
            cout << "=530" << endl;
            cout << "=620" << endl;
            cout << "=120" << endl;
            cout << "Press 1 to order Burger" << endl;
            cout << "Press 2 to order Pizza" << endl;
            cout << "Press 3 to order Soda" << endl;
            cout << "Press 4 to order Salad" << endl;
            cout << "Press 5 to order samosa" << endl;
            cout << "Press 6 to order rotti+korma" << endl;
            cout << "Press 7 to order rotti+sallan" << endl;
            cout << "Press 8 to order rolls" << endl;
            cout << "Press 9 to order Sandwich" << endl;
            cout << "Enter item number to order: ";
            cin >> choice;
            system("cls");
            cout << "Enter quantity: ";
            cin >> quantity;
            system("cls");

            switch (choice)
            {
            case 1:
                price = 200;
                break;
            case 2:
                price = 300;
                break;
            case 3:
                price = 120;
                break;
            case 4:
                price = 400;
                break;
            case 5:
                price = 320;
                break;
            case 6:
                price = 420;
                break;
            case 7:
                price = 530;
                break;
            case 8:
                price = 620;
                break;
            case 9:
                price = 120;
                break;
            default:
                cout << "Invalid choice!" << endl;
                return 0;
            }

            totalPrice = price * quantity;
            cout << "Total price: " << totalPrice << endl;
        }
        else
        {
            cout << "Incorrect pin!" << endl;
            goto pin;
        }
    }

    else if (choice == 1)
    {

        {
            cout << "Here is the MENU:" << endl;
            cout << "All items are: " << endl;
            cout << " = Burger" << endl;
            cout << " = Pizza" << endl;
            cout << " = Soda" << endl;
            cout << " = Salad" << endl;
            cout << " = samosa" << endl;
            cout << " = rotti+korma" << endl;
            cout << " = rotti+sallan" << endl;
            cout << " = rolls" << endl;
            cout << " = Sandwich" << endl;
            cout << "Prices for all items: " << endl;
            cout << "=200" << endl;
            cout << "=300" << endl;
            cout << "=120" << endl;
            cout << "=400" << endl;
            cout << "=320" << endl;
            cout << "=420" << endl;
            cout << "=530" << endl;
            cout << "=620" << endl;
            cout << "=120" << endl;
            cout << "Press 1 to order Burger" << endl;
            cout << "Press 2 to order Pizza" << endl;
            cout << "Press 3 to order Soda" << endl;
            cout << "Press 4 to order Salad" << endl;
            cout << "Press 5 to order samosa" << endl;
            cout << "Press 6 to order rotti+korma" << endl;
            cout << "Press 7 to order rotti+sallan" << endl;
            cout << "Press 8 to order rolls" << endl;
            cout << "Press 9 to order Sandwich" << endl;
            cout << "Enter item number to order: ";
            cin >> choice;
            system("cls");
        }
        {
            cout << "Enter quantity: ";
            cin >> quantity;
            system("cls");
        }

        switch (choice)
        {
        case 1:
            price = 200;
            break;
        case 2:
            price = 300;
            break;
        case 3:
            price = 120;
            break;
        case 4:
            price = 400;
            break;
        case 5:
            price = 320;
            break;
        case 6:
            price = 420;
            break;
        case 7:
            price = 530;
            break;
        case 8:
            price = 620;
            break;
        case 9:
            price = 120;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 0;
        }

        {
            totalPrice = price * quantity;
            cout << "Total price: " << totalPrice << endl;
        }
    }
    else
    {
        cout << "Invalid selection! Exiting program." << endl;
        return 0;
    }
    cout << "press 1 for want more items : " << endl;
    cout << "press 2 for ending : " << endl;
    cin >> choice;
    system("cls");

    if (choice == 1)
    {
        cout << "Customer want more items . " << endl;

        goto menu;
    }
    else if (choice == 2)
    {
    End:
        system("CLS");
        cout << "zero";
        cout << "                           **:::{Thank You!}:::**                             " << endl;
        cout << "                              **{Have a Good Day}**                              " << endl;
        cout << "                            :::**{ALLAH HAFIZ}**:::                            " << endl;
    }

    return 0;
}