// Search a node in BST return true if it is present else return false
#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* right;
    Node* left;

    Node(int d){
        data = d;
        right = left = nullptr;
    }
};

// insert element in bst
Node* insertInBST(Node* root, int val){
    if(root == nullptr){
        Node* new_node = new Node(val);
        root = new_node;
        return root;
    }

    if(val > root->data){
       root->right = insertInBST(root->right,val);
    }else{
        root->left = insertInBST(root->left,val);
    }

    return root;
}

// Build a BST
Node* buildBST(vector<int> sequence){
    Node* root = nullptr;

    for(int i= 0; i<sequence.size(); i++){
        root = insertInBST(root,sequence[i]);
    }

    return root;
}

// inOrder printing
void inOrder(Node* root){
    if(root == nullptr){
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
    
    return;
}

// preOrder
void preOrder(Node* root){
    if(root == nullptr){
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);

    return;
}

// postOrder
void postOrde(Node* root){
    if(root == nullptr){
        return;
    }

    postOrde(root->left);
    postOrde(root->right);
    cout << root->data << " ";
    return ;
}


// search a Node in BST
bool searchInBST(Node* root,int val){
    if(root == nullptr){
        return false;
    }
    if(root->data == val){
        return true;
    }

    if(val > root->data){
        return searchInBST(root->right,val);
    }else{
        return searchInBST(root->left,val);
    }

    return false;
}


int main(){

    vector<int> sequence={3,2,1,5,6,4};

    Node* root = buildBST(sequence);

    inOrder(root);
    cout << endl;
    preOrder(root);
    cout << endl;
    postOrde(root);
    cout << endl;

    cout << searchInBST(root,6);
    return 0;
}