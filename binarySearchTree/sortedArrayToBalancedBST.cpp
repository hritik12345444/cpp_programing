// Sorted array to balanced bst
// arr = [-10,-3,0,5,9]
// array ke mid lo root bna liye hai fir left side wala arry element to left subtree ke liye call krr diye hai aur right part wala element ko right subtree ke call krr diye hai 

#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* right;
    Node* left;

    Node(int d){
        data=d;
        left=right=nullptr;
    }
};


// sorted array convernt into bst
Node* sortedArrToBalaBst(vector<int> v , int si, int ei){

    if(si > ei){   // if starting index bara ho jayega ending index se to koi element nhi hai wha 
        return nullptr;
    }

    int mid = si+(ei-si) /2;
    Node* root = new Node(v[mid]);
    root->left = sortedArrToBalaBst(v,si,mid-1);
    root->right = sortedArrToBalaBst(v,mid+1,ei);  // right subtree ke liye mid ke badh wala portion hoga array ka 

    return root;


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


int main(){

    vector<int> v={-10,-3,0,5,9};
    int si = 0, ei = v.size()-1;
    Node* root = sortedArrToBalaBst(v,si,ei);

    cout<<endl;
    inOrder(root);
    // cout << root->data << root->left->data;
    return 0;
}