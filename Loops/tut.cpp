#include <iostream>
#include <windows.h>

using namespace std;
int main()
{

    system("cls");
    system("Color B");
    // Rows. print 10 rows
    for (int i = 1; i <= 10; i++)
    // loop1:
    // i=1
    // i<=10
    //(1<=10) true

    // j=1 => j<=i(1) => (1<=1)
    //  print(*)

    // loop2 :
    // i=1
    // i++ (i=2)
    // 2<=10 true

    // j=1
    // j<=i (1<=2)
    //(**)

    {
        // coloumn and asterisks printed
        for (int j = 1; j <= i; j++)

        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}