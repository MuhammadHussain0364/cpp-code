#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    system("cls");
    system("Color 0A");

    int choice, press, pin, amount, balance = 10000;

    cout << "                                          *::Welcome to the ATM::*                   " << endl;
    cout << "                                             {:::INSTRUCTIONS:::}                " << endl;
    cout << "                                        **As a good citizen it's your duty**         " << endl;
    cout << "Please protect your ATM code." << endl;
    cout << "After any problem ATM was not responsible about that." << endl;
    cout << "                                                {Follow these Rules}...                    " << endl;
    cout << "1 = Keep our ATM area clean." << endl;
    cout << "2 = Smoking is prohibited." << endl;
    cout << "3 = Keep silence." << endl;
    cout << "                    ::Thanks::                        " << endl;
    cout << "Press any numeric key to continue..." << endl;
    cin >> press;
    system("cls");

pin:
    cout << "Enter your pin: " << endl;
    cin >> pin;
    system("cls");

    if (pin == 123)
    {
        cout << "Your pin is correct." << endl;
        cout << "Press 1 if you want to withdraw your amount..." << endl;
        cout << "Press 2 if you want to check your current balance..." << endl;
        cout << "Press 3 if you want to deposit amount..." << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        system("cls");

        if (choice == 1)
        {
        amount:
            cout << "Enter your amount to withdraw: ";
            cin >> amount;
            system("cls");

            if (amount <= balance)
            {
                cout << "withdraw amount is :" << amount << endl;
                cout << "remaining amount is :" << balance - amount << endl;
            }
            else
            {
                cout << "Insufficient balance! You don't have this amount... " << amount << endl;
            }
        }
        else if (choice == 2)
        {
            cout << "Your current balance is: " << balance << endl;
        }
        else if (choice == 3)
        {
        deposit:
            cout << "Enter the amount you want to deposit: ";
            cin >> amount;
            system("cls");

            if (amount > 0)
            {

                cout << "You deposited: " << amount << endl;
                cout << "Your new balance is: " << balance + amount << endl;
            }
            else
            {
                cout << "Invalid deposit amount." << endl;
            }
        }
        else
        {
        cout << "Invalid choice..." << endl;
        }
    }
    else
    {
        cout << "::incorrect pin::" << endl;
        goto pin;
    }
    cout << "Press 1 if you want to withdraw more amount..." << endl;
    cout << "Press 2 if you want to deposit more amount..." << endl;
    cout << "Press 3 for ending..." << endl;
    cin >> choice;

    if (choice == 1)
    {
        cout << "customer want to withdraw more amount..." << endl;
        goto amount;
    }
    if (choice == 2)
    {
        cout << " customer want to deposit more amount..." << endl;
        goto deposit;
    }

    if (choice == 3)
    {
        system("CLS");
        cout << "zero";
        cout << "                           **:::{Thank You! For using ATM machine}:::**                             " << endl;
        cout << "                              **{Have a Good Day}**                              " << endl;
        cout << "                            :::**{ALLAH HAFIZ}**:::                            " << endl;
        cout << "                            *****I hope Happy Ending*****                             " << endl;
    }

    return 0;
}
