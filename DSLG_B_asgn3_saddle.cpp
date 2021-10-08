#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;
    int arr[r][c];
    int flag;
    cout << "Enter the elements of matrix:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "The matrix is: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    int min;
    for (int i = 0; i < r; i++)
    {
        // flag = 0;
        min = arr[i][0];
        int c_ind = 0;
        for (int j = 1; j < c; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                c_ind = j;
            }
        }
        int max = arr[0][c_ind];
        for (int k = 0; k < r; k++)
        {
            if (arr[k][c_ind] > max)
            {
                max = arr[k][c_ind];
            }
            // if (arr[k][c_ind] > min)
            // {
            //     flag = 0;
            //     break;
            // }
            // else
            // {
            //     flag = 1;
            // }
        }
        if (max == min)
        {
            cout << "Saddle point is: " << min << "\n";
        }
        // if (flag == 1)
        // {
        //     cout << "Saddle point is: " << min << "\n";
        // }
    }
}