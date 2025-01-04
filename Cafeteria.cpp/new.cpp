#include <iostream>
#include <windows.h>
using namespace std;

int balance = 10000; // Global balance variable

// Function to display instructions
void displayInstructions() {
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
}

// Function to verify the pin
bool verifyPin() {
    int pin;
    cout << "Enter your pin: " << endl;
    cin >> pin;
    if (pin == 123) {
        return true;
    } else {
        cout << "::incorrect pin::" << endl;
        return false;
    }
}

// Function to withdraw amount
void withdrawAmount() {
    int amount;
    cout << "Enter your amount to withdraw: ";
    cin >> amount;

    if (amount <= balance) {
        balance -= amount;
        cout << "Withdraw amount is: " << amount << endl;
        cout << "Remaining balance is: " << balance << endl;
    } else {
        cout << "Insufficient balance! You don't have this amount... " << amount << endl;
    }
}

// Function to deposit amount
void depositAmount() {
    int amount;
    cout << "Enter the amount you want to deposit: ";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "You deposited: " << amount << endl;
        cout << "Your new balance is: " << balance << endl;
    } else {
        cout << "Invalid deposit amount." << endl;
    }
}

// Function to display the main menu
void displayMenu() {
    int choice;
    cout << "Press 1 if you want to withdraw your amount..." << endl;
    cout << "Press 2 if you want to check your current balance..." << endl;
    cout << "Press 3 if you want to deposit amount..." << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        withdrawAmount();
    } else if (choice == 2) {
        cout << "Your current balance is: " << balance << endl;
    } else if (choice == 3) {
        depositAmount();
    } else {
        cout << "Invalid choice..." << endl;
    }
}

int main() {
    system("cls");
    system("Color 0A");

    int press;
    displayInstructions(); // Call to display instructions
    cin >> press;
    system("cls");

    while (!verifyPin()) {
        // Retry until the correct pin is entered
    }

    // Once pin is verified, show the menu and handle operations
    displayMenu();

    int choice;
    cout << "Press 1 if you want to withdraw more amount..." << endl;
    cout << "Press 2 if you want to deposit more amount..." << endl;
    cout << "Press 3 for ending..." << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Customer wants to withdraw more amount..." << endl;
        withdrawAmount();
    } else if (choice == 2) {
        cout << "Customer wants to deposit more amount..." << endl;
        depositAmount();
    } else if (choice == 3) {
        system("CLS");
        cout << "zero";
        cout << "                           **:::{Thank You! For using ATM machine}:::**                             " << endl;
        cout << "                              **{Have a Good Day}**                              " << endl;
        cout << "                            :::**{ALLAH HAFIZ}**:::                            " << endl;
        cout << "                            *****I hope Happy Ending*****                             " << endl;
    }

    return 0;
}
