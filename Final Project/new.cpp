#include <iostream>
using namespace std;

char Arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char turn = 'X';
int row, coloumn;
bool draw = false;

void display_board()
{
    system("cls");
    cout << "Tick Cross Game" << endl;
    cout << "Player1 [X]" << endl;
    cout << "Player2 [O]" << endl;

    cout << "\t" << Arr[0][0] << "  | " << Arr[0][1] << "  | " << Arr[0][2] << endl;
    cout << "\t---|----|----" << endl;
    cout << "\t" << Arr[1][0] << "  | " << Arr[1][1] << "  | " << Arr[1][2] << endl;
    cout << "\t---|----|----" << endl;
    cout << "\t" << Arr[2][0] << "  | " << Arr[2][1] << "  | " << Arr[2][2] << endl;
}

void player_turn()
{

    int choice;

    if (turn == 'X')
        cout << "\tPlayer1 [X] turn: ";

    if (turn == 'O')
        cout << "\tPlayer2 [O] turn: ";

    cin >> choice;

    switch (choice)
    {

    case 1:
        row = 0;
        coloumn = 0;
        break;
    case 2:
        row = 0;
        coloumn = 1;
        break;
    case 3:
        row = 0;
        coloumn = 2;
        break;
    case 4:
        row = 1;
        coloumn = 0;
        break;
    case 5:
        row = 1;
        coloumn = 1;
        break;
    case 6:
        row = 1;
        coloumn = 2;
        break;
    case 7:
        row = 2;
        coloumn = 0;
        break;
    case 8:
        row = 2;
        coloumn = 1;
        break;
    case 9:
        row = 2;
        coloumn = 2;
        break;
    default:
        cout << "Invalid choice";
    }

    if (turn == 'X' && Arr[row][coloumn] != 'X' && Arr[row][coloumn] != 'O')
    {
        Arr[row][coloumn] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && Arr[row][coloumn] != 'X' && Arr[row][coloumn] != 'O')
    {
        Arr[row][coloumn] = 'O';
        turn = 'X';
    }

    else
    {
        cout << "Box already filled " << endl;
        cout << "Please try again" << endl;
        player_turn();
    }
    display_board();
}

bool gameover()
{

    // check win
    for (int i = 0; i < 3; i++)
        if (Arr[i][0] == Arr[i][1] && Arr[i][0] == Arr[i][2] || Arr[0][i] == Arr[1][i] && Arr[0][i] == Arr[2][i])
            return false;

    if (Arr[0][0] == Arr[1][1] && Arr[0][0] == Arr[2][2] || Arr[0][2] == Arr[1][1] && Arr[0][2] == Arr[2][0])
        return false;

    // if there a any box not filles
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (Arr[i][j] != 'X' && Arr[i][j] != 'O')
                return true;

    // draw
    draw = true;
    return false;
}

int main()
{

    while (gameover())
    {
        display_board();
        player_turn();
        gameover();
    }

    if (turn == 'X' && draw == false)
        cout << "Player2 [O] wins!! Congretulations" << endl;

    else if (turn == 'O' && draw == false)
        cout << "Player1 [X] wins!! Congretulations" << endl;

    else
        cout << "Game Draw!!" << endl;
}