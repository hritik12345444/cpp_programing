// count the nodes in tree
#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data= d;
        left = right = NULL;
    }
};


// Tree is build
static int idx=-1;
Node* buildTree(vector<int> sequence){
    idx++;

    if(sequence[idx]==-1){
        return NULL;
    }

    Node* root= new Node(sequence[idx]);
    root->left= buildTree(sequence);
    root->right= buildTree(sequence);

    return root;
}


// traverse a tree
void preorder(Node* root){

    if(root==NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left); 
    preorder(root->right);
    return; 
}


// count no of node in this tree
int countNode(Node* root){

    if(root==NULL){
        return 0;
    }

    int leftCount= countNode(root->left);
    int rightCount= countNode(root->right);
    return leftCount+rightCount+1;
    
}

int main(){

    vector<int> sequence={1,2,4,8,-1,-1,9,-1,-1,5,-1,-1,3,6,-1,10,-1,-1,7,-1,-1};

    Node* root= buildTree(sequence);
    preorder(root);
    cout << endl;
   
    int countOfNode= countNode(root);
    cout << "Count : " << countOfNode << endl;
    return 0;
}

// Working