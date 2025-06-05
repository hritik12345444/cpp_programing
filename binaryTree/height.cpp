// Height of tree
#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int v){
        data= v;
        left=right=NULL;
    }
};


// tree will be formed
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


// Traverse in preorder
void preorder(Node* root){

    if(root==NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

    return;
}


// calculate the height of tree
int heightOfTree(Node* root){

    if(root==NULL){
        return 0;
    }

    int lfthyt= heightOfTree(root->left);
    int rythyt= heightOfTree(root->right);

    return max(lfthyt,rythyt)+1;
}

int main(){

    vector<int> sequence={1,2,4,8,-1,-1,9,-1,-1,5,-1,-1,3,6,-1,10,-1,-1,7,-1,-1};

    Node* root= buildTree(sequence);

    preorder(root);  // print in preorder 
    cout << endl;

    int height= heightOfTree(root);
    cout << "Height : " << height << endl;

    
    return 0;
}

/// Working