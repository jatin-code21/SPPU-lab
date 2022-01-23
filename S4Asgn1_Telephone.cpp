#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next; // Link list for open hashing
} * HashTable[10];

class hashing
{
public:
    hashing()
    {
        for (int i = 0; i < 10; i++)
        {
            HashTable[i] = NULL; // intializing hashtable to null to prevent any garbage value circumstance
        }
    }
    int HashFunction(int val)
    {
        return (val % 10);
    }
    Node *createNode(int x) // in case of collison new node
    {
        Node *temp = new Node;
        temp->next = NULL;
        temp->val = x;
        return temp;
    }

    void display()
    {
        for (int i = 0; i < 10; i++)
        {
            Node *temp = new Node;
            temp = HashTable[i];
            cout << "HashTable[" << i << "] : ";
            while (temp != NULL)
            {
                cout << temp->val << " ";
                temp = temp->next;
            }
            cout << "\n";
        }
    }

    int searchNumber(int value)
    {
        bool flag = false;
        int hash_val = HashFunction(value); // to look at which index the number is stored;
        Node *intial = HashTable[hash_val];
        cout << "\nElement found at: ";
        while (intial != NULL)
        {
            if (intial->val == value)
            {
                cout << hash_val << ": " << intial->val;
                flag = true;
            }
            intial = intial->next;
        }
        if (!flag)
            return -1;
    }

    void deleteNumber(int value)
    {
        int hash_val = HashFunction(value);
        Node *intial = HashTable[hash_val];
        if (intial == NULL)
        {
            cout << "No Number Found";
            return;
        }
        if (intial->val == value)
        {
            HashTable[hash_val] = intial->next;
            return;
        }
        while ((intial->next->val) != value)
        {
            intial = intial->next;
        }
        intial->next = intial->next->next;
    }

    void insert(int value)
    {
        int hash_val = HashFunction(value);
        Node *head = new Node; // contains the value that is to be added now
        Node *temp = new Node;
        head = createNode(value);
        temp = HashTable[hash_val]; // checking if at that index value is already present or not
        if (temp == NULL)
        {
            HashTable[hash_val] = head;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = head;
        }
    }
};

int main()
{
    int ch, data, search, del;
    hashing h;
    do
    {
        cout << "\n1. Insert\n2. Display\n3. Search\n4. Delete\n5. Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter phone no. to be added: ";
            cin >> data;
            h.insert(data);
            break;
        case 2:
            h.display();
            break;
        case 3:
            cout << "\nEnter the number to be searched: ";
            cin >> search;

            if (h.searchNumber(search) == -1)
            {
                cout << "No number found at the key";
                continue;
            }
            break;
        case 4:
            cout << "\nEnter the number to be deleted: ";
            cin >> del;
            h.deleteNumber(del);
            cout << "Phone no. Deleted\n";
            break;
        }
    } while (ch != 5);
}