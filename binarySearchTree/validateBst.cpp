// Validate bst (check the given bst to valid or invalid)
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
        right = left=nullptr;
    }
};

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

Node* buildBST(vector<int> sequence){
    Node* root = NULL;
    for(int i=0; i<sequence.size(); i++){
        root = insertInBST(root,sequence[i]);
    }
    return root;
}


void inOrder(Node* root){
    if(root == nullptr){
        return;
    }

    inOrder(root->left);
    cout  << root->data << " ";
    inOrder(root->right);
    return;
}


// agar root ka value min se choota hai to to wo out of range hai agar root ka value max se bada hai to wo bhi out of range hai isisliye ye false hai
bool validateBST(Node* root, int min, int max){

    if(root == nullptr){
        return true;
    }

    if(root->data <= min || root->data >= max){
        return false;
    }
    return validateBST(root->left,min,root->data) && validateBST(root->right,root->data,max);
}

int main(){

    vector<int> v ={3,2,1,5,6,4};
    Node* root = buildBST(v);
    cout << endl;
    inOrder(root);
    cout << endl;
    bool res = validateBST(root,INT8_MIN, INT8_MAX);
    cout << res << endl;

    return 0;
}