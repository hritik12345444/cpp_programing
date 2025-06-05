// implement binary tree , build a tree and traverse the tree

#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data= val;
        left=right= NULL;
    }
};

static int idx= -1; // static ka use kiye hai kyuki jab bhi funcion ko call ho to bar bar idx starting se start na ho jaha hai uske aage se start ho 
Node* buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx]==-1){  // matlab jab bhi kisi time index -1 ko point krega to uska na koi left na koi right child hoga wha null value hoga only
        return NULL;
    }

    Node* root= new Node(preorder[idx]);
    root->left= buildTree(preorder);
    root->right= buildTree(preorder);

    return root;
}


// Traverse in preorder
void preorder(Node* root){  

    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


// Traverse in inOrder
void inOrder(Node* root){

    if(root==NULL){
        return; 
    }

    inOrder(root->left);
    cout << root->data <<" ";
    inOrder(root->right);
    return;
}

// Traverse in postOrder
void postOrder(Node* root){

    if(root==NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";

    return;
}

int main(){

    vector<int> sequence= {1, 2, -1, -1, 3, -1, -1};
    Node* root= buildTree(sequence);
    preorder(root);

    // // thise printing is not a good way to print
    // cout << root->data << " ";
    // cout << root->left->data << " ";
    // cout << root->right->data << " ";
    // cout << root->right->left->data << " ";
    // cout << root->right->right->data << " ";
    
    return 0;
}

// Working