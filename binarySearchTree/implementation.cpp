// implementation of binarySearchTree
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

// insert in binary search tree in correct way
Node *insert(Node *root, int value)
{
    Node *new_node = new Node(value);

    if (root == NULL)
    {
        root = new_node;
        return root;
    }

    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }

    if (value > root->data)
    {
        root->right = insert(root->right, value);
    }

    return root;
}

// return true if element is present in tree else false
bool isAvailable(Node *root, int value)
{

    if (root == NULL)
    {
        return false;
    }

    if (root->data == value)
    {
        return true;
    }

    if (value < root->data)
    {
        return isAvailable(root->left, value);
    }

    if (value > root->data)
    {
        return isAvailable(root->right, value);
    }

    return false;
}

// find inOrderSuccessor
Node *findSuccessor(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

// delet key in BST
Node *deletInBst(Node *root, int value)
{

    if (root == NULL)
    {
        return NULL;
    }

    if (value < root->data)
    {
        root->left = deletInBst(root->left, value);
    }

    else if (value > root->data)
    {
        root->right = deletInBst(root->right, value);
    }

    if (value == root->data)
    {

        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->right != NULL && root->left != NULL)
        {
            Node *temp = findSuccessor(root->right);
            root->data = temp->data;
            root->right = deletInBst(root->right, temp->data);
        }
    }
    return root;
}

// if we print in inorder traversal than output tree is always in sorted order
void inorder(Node *root)
{

    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    return;
}

int main()
{

    Node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    inorder(root);
    cout << endl;

    int key;
    cout << "enter key : ";
    cin >> key;

    cout << (isAvailable(root, key) ? deletInBst(root, key), "Yes, it is available and also be deleted" : "No, Element is not availabale") << endl;
    // deletInBst(root, key);
    inorder(root);

    return 0;
}