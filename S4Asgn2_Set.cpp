#include <bits/stdc++.h>
using namespace std;

class Set
{
    int data[100];

public:
    int i = -1;
    void Insert(int val);
    void display();
    void remove(int val);
    bool search(int val);
    int setSize();
};

void Set::Insert(int val)
{
    i++;
    data[i] = val;
}

void Set::display()
{
    for (int j = 0; j <= i; j++)
    {
        cout << data[j] << " ";
    }
}

void Set::remove(int val)
{
    int k;
    for (k = 0; k <= i; k++)
    {
        if (data[k] == val)
            break;
    }
}

bool Set::search(int val)
{
    for (int j = 0; j <= i; j++)
    {
        if (data[j] == val)
        {
            return true;
        }
    }
    return false;
}

int Set::setSize()
{
    return i + 1;
}

int main()
{
    int ch, val, x;
    Set s1;
    // s1.Insert(10);
    // s1.Insert(20);
    // s1.display();
    do
    {
        cout << "\n1. Insert\n2. Display\n3. Search\n4. Size\n5. Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the element you want to add in Set: ";
            cin >> val;
            s1.Insert(val);
            break;
        case 2:
            cout << "The elements in the set are: ";
            s1.display();
            break;
        case 3:
            cout << "\nEnter the number you want to search: ";
            cin >> x;
            if (s1.search(x))
            {
                cout << "Element Found\n";
            }
            else
            {
                cout << "Element Not Found\n";
            }
            break;
        case 4:
            cout << "The size of the set is: " << s1.setSize() << "\n";
            break;
        }
    } while (ch != 5);
}