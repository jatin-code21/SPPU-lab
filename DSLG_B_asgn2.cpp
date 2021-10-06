#include <bits/stdc++.h>
using namespace std;
#define nline "\n"

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min = arr[j];
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    cout << "The top 5 score is: "
         << nline;
    for (int i = n - 1; i >= n - 5; i--)
    {
        cout << arr[i] << " ";
    }
    cout << nline;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "The top 5 score is: " << nline;
    for (int i = n - 1; i >= n - 5; i--)
    {
        cout << arr[i] << " ";
    }
    cout << nline;
}

int main()
{
    char cont = 'y';
    while (cont == 'y')
    {
        int n;
        cout << "Enter the number of students: ";
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the percentage of student  " << i + 1 << ": ";
            cin >> arr[i];
        }
        cout << "Which sort method you want to perform:" << nline;
        cout << "1.Selection Sort" << nline;
        cout << "2.Bubble Sort " << nline;
        int ch;
        cin >> ch;
        if (ch == 1)
        {
            selectionSort(arr, n);
        }
        else if (ch == 2)
        {
            bubbleSort(arr, n);
        }
        cout << "Want to continue? Y/N: ";

        cin >> cont;
    }

    return 0;
}