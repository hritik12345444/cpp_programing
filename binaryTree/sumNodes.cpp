// sum of nodes
#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data=d;
        left=right=NULL;
    }
};


// build the binary tree
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


// Calculate sum
int sumOfNOdes(Node* root){

    if(root==NULL){
        return 0;
    }

    int leftSum= sumOfNOdes(root->left);
    int rightSum= sumOfNOdes(root->right);

    return leftSum+rightSum+root->data;
}


int main(){

    vector<int> sequence={1,2,4,8,-1,-1,9,-1,-1,5,-1,-1,3,6,-1,10,-1,-1,7,-1,-1};
    Node* root= buildTree(sequence);
    int sum = sumOfNOdes(root);
    cout << "Sum : " << sum << endl;
    return 0;
}

// Working