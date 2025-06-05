// Transform to the sum tree
#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* right;
    Node* left;

    Node(int d){
        data= d;
        right=left=NULL;
    }
};


// Build a tree
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


void preorder(Node* root){

    if(root==NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


// modify data of each node of a tree
int sumTree(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftSum= sumTree(root->left);
    int rightSUm= sumTree(root->right);

    root->data += leftSum + rightSUm;
    return root->data;
}

// yehi hua hai uper wala function me call kiye hai ki kuch bhi return nahi hoga but function se hmm kuch return krr skte hai calling fucntion ko mann hai to return value ko store krega mann nahi hai to store nahi krega

// int fun(int* p){
//     *p=30;

//     return 100;   /// integer value kuch bhi return krr rhe hai or krr skte hai 
// }



int  main(){

    vector<int> sequence={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root= buildTree(sequence);

    cout << "Befor transform : ";
    preorder(root);
    cout << endl;
    
    // original tree ka data modified ho rha hai 
    sumTree(root);   // int res= sumTree(root)  ye bhi krr skte hai tbb isme main root ka data aayega

    cout << "After transorm : ";
    preorder(root);
    cout << endl;
    
    return 0;
}
