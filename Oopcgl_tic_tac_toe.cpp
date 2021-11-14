#include <bits/stdc++.h>
using namespace std;
#define nline "\n";

int main()
{
    char arr[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'},
    };

    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << nline;
    }

    for (int i = 0; i < 9; i++)
    {
        char psn, choice;
        cout << "Enter the position at which you want to insert O/X: ";
        cin >> psn;
        cout << "Enter O/X: ";
        cin >> choice;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (psn == arr[i][j])
                {
                    arr[i][j] = choice;
                    break;
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << nline;
        }

        // Checking the results
        if ((arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X'))
        {
            cout << "X Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X'))
        {
            cout << "X Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X'))
        {
            cout << "X Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X'))
        {
            cout << "X Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X'))
        {
            cout << "X Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X'))
        {
            cout << "X Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X'))
        {
            cout << "X Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X'))
        {
            cout << "X Player Wins" << nline;
            flag = 1;
            break;
        }

        // For O player
        else if ((arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O'))
        {
            cout << "O Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O'))
        {
            cout << "O Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O'))
        {
            cout << "O Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O'))
        {
            cout << "O Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O'))
        {
            cout << "O Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O'))
        {
            cout << "O Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O'))
        {
            cout << "O Player Wins" << nline;
            flag = 1;
            break;
        }
        else if ((arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O'))
        {
            cout << "O Player Wins" << nline;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "DRAW" << nline;
    }
}