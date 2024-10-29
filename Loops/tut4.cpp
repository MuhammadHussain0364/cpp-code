#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    
    system("cls");
    system("Color 2");

    // Create 10 rows with decreasing asterisks
    for (int i = 10; i > 0; i--)
     {
        // Print spaces for right alignment
        for (int j = 0; j < 10-i; j++) 
        {
            cout << " ";
        }

        // Print asterisks
        for (int k = 0; k < i; k++) 
        {
            cout << "* ";
        }

        // Move to the next line after each row of asterisks
        cout << endl;
    }

}