// identical tree check

// NOTE:->  jab bhi do tree bnana ho aur buildtree ka funcion me idx agar static hai to ek reset funcion bnana hoga tbb idx wapas -1 pe aayega, ussse phle idx ko globle declearation krna hoga

#include<iostream>
#include<vector>
using namespace std;
static int idx=-1;    // this is used for build a binary tree, it is a global declearation . If we declear here than we can change value from anytime & andywhere

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        data= d;
        left= right=NULL;
    }
};


// reset static index
void reset(){
    idx=-1; 
}



// Build binary tree
Node* buildTree(vector<int> sequence){
    idx++;    // idx is declear in like a global declearaion

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
}


bool isIdentical(Node* root1, Node* root2){

    if(root1==NULL && root2==NULL){
        return true;
    }

    if(root1==NULL && root2!=NULL){
        return false;
    }   

    if(root1!=NULL && root2==NULL){
        return false;
    }   

    bool checkleft= isIdentical(root1->left,root2->left);
    bool checkright= isIdentical(root1->right,root2->right);

    return checkleft && checkright && (root1->data==root2->data);
}



int main(){
    vector<int> sequence1= {1,2,4,8,-1,-1,9,-1,-1,5,-1,-1,3,6,-1,10,-1,-1,7,-1,-1};   // sequence of 1st tree
    Node* root1= buildTree(sequence1);   // build the first tree
    reset();   // this function reset the value of index to -1 , because after build a tree the idx is pointing to last index of sequence. if we create a another tree wihtout using this function than new tree can't be created

    vector<int> sequence2= {1,2,4,8,-1,-1,9,-1,-1,5,-1,-1,3,6,-1,10,-1,-1,7,-1,-1}; // sequence of 2nd tree
    Node* root2= buildTree(sequence2);  // build the second tree

    preorder(root1);
    cout << endl;
    preorder(root2);
    cout << endl;

    cout << (isIdentical(root1,root2) ? "yes isIdentical"  : "Not identical");
}