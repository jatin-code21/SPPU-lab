#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the index at which you want to add the element: ";
    int ind;
    cin >> ind;
    cout << "Enter the element you want to enter: ";
    int ele;
    cin >> ele;
    n++;
    for (int i = n - 1; i > ind; i--)
    {

        arr[i] = arr[i - 1];
        arr[i - 1] = ele;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}