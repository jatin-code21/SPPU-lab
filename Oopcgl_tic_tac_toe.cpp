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
        cout << "Enter 0/X: ";
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
    }
}