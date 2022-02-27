#include <bits/stdc++.h>
using namespace std;

class BST
{
public:
    int data;
    BST *left, *right;
    BST(int val)
    {
        data = val;
        left = right = NULL;
    }
};

BST *insert(BST *root, int key)
{
    if (root == NULL)
    {
        return new BST(key);
    }
    if (root->data > key)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }
    return root;
}

vector<int> inorder(BST *root)
{
    vector<int> trav;
    if (root == NULL)
        return trav;
    inorder(root->left);
    trav.push_back(root->data);
    inorder(root->right);
    return trav;
}

void min_element(BST *root)
{
    auto min = inorder(root);
    cout << min[0] << "\n";
}

BST *Search(BST *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
        return root;
    if (key < root->data)
    {
        return Search(root->left, key);
    }
    return Search(root->right, key);
}

vector<int> longestPath(BST *root)
{
    vector<int> temp, rightPath, leftPath;
    if (root == NULL)
        return temp;
    rightPath = longestPath(root->right);
    leftPath = longestPath(root->left);

    if (leftPath.size() > rightPath.size())
        leftPath.push_back(root->data);
    else
        rightPath.push_back(root->data);

    return (leftPath.size() > rightPath.size()) ? leftPath : rightPath;
}

int main()
{
    char cont;
    BST *root = NULL;
    root = insert(root, 7);
    do
    {
        int ch, val, key;
        cout << "\n1. Insert the new node in BST";
        cout << "\n2. Search in BST";
        cout << "\n3. Min value of BST";
        cout << "\n4. Size of Longest Path";
        cout << "\n5. Exit";
        cout << "\nEnter the function number you want to perform: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter the value you want to insert: ";
            cin >> val;
            insert(root, val);
            break;

        case 2:
            cout << "\nEnter the key you want to search: ";
            cin >> key;
            if (Search(root, key) == NULL)
                cout << "\nKey not Found";
            else
                cout << "\nKey Found";
            break;

        case 3:
            min_element(root);
            break;

        case 4:
            auto lp = longestPath(root);
            cout << "\n"
                 << lp.size();
            break;
        }
        cout << "\nWant to Continue(y/n): ";
        cin >> cont;
    } while (cont != 'n');
}