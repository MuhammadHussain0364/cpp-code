#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    system("cls");
    system("Color 2");

    // Rows before asterisks
    for (int row =1 ; row <= 8; row++)
    {
        // spaces
        for (int j =8 ; j > row; j--)
        {
            cout <<" ";
        }
        // asterisks increase with each row.starting from the second row
        for (int k = 1; k < row; k++)
        {
            cout << "* ";
        }
        // moves the output to the next line after each row is printed
        cout << endl;
    }
}
