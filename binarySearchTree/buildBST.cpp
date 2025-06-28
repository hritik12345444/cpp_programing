// build a BST (Binary Search Tree)

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
        right = left = NULL;
    }
};

// Insert element in Binary Search Tree (helper function for build a tree)
Node* insertInBST(Node* root , int val){
    if(root == NULL){
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


// build a tree
Node* buildBST(vector<int> sequence){
    Node* root = NULL;
    for(int i=0; i<sequence.size(); i++){
        root = insertInBST(root,sequence[i]);
    }
    return root;
}

// inOrder traversal
void inOrder(Node* root){

    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " "; 
    inOrder(root->right);
    return;
}

int main(){

    vector<int> sequence={3,2,1,5,6,4};
    Node* root = buildBST(sequence);

    inOrder(root);
    cout << endl;
    return 0;
}