// Build tree with preorder and inorder sequence
#include<iostream>
#include<vector>
#include<queue>
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

//  search index of root in inorder sequence for find the node left and right
int search(int val, vector<int> &inorder , int left, int right){

    // inorder sequence me root->data ko dhundh rhe hai jab milega uska inorder ka index return krr denge
    for(int i=0; i<=inorder.size()-1; i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;  // this is for nothing
}


// preorder and inorder ka use se binary tree build krna
Node* buildBinaryTree(vector<int> &preoder, vector<int> &inorder, int &preIdx, int left, int right){

    // jab left greater ho jayega right se to return krr jayenge
    if(left > right){
        return NULL;
    } 

    Node* root= new Node(preoder[preIdx]);
    int ino_Idx = search(root->data, inorder , left, right); // search index of root->data in inorder sequecne
    preIdx++;

    root->left = buildBinaryTree(preoder,inorder,preIdx, left, ino_Idx-1);
    root->right = buildBinaryTree(preoder,inorder,preIdx,ino_Idx+1,right);

    return root;
}

void preorder_traversal(Node* root){
    if(root==NULL){
        return;
    }

    cout << root->data<< " ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
    
    return;
}

int main(){

    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};

    int preIdx= 0;
    int left= 0;
    int right= inorder.size()-1;
    Node* root= buildBinaryTree(preorder,inorder,preIdx, left, right);
    preorder_traversal(root);

    // cout << root->data << " " << root->left->data << endl;
    return 0;
}