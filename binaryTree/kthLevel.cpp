// kth Level of tree

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
        this->data=d;
        left=right=NULL;
    }
};

static int idx=-1;
Node* buildTree(vector<int> sequence){
    idx++;

    if(sequence[idx]== -1){
        return NULL;
    }

    Node* root=new Node(sequence[idx]);
    root->left= buildTree(sequence);
    root->right= buildTree(sequence);

    return root;
}

// traverse in preorder
void preorder(Node* root){
    if(root==NULL){
        return;
    }

    cout <<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

    return;
}

void leveOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* curr= q.front();
        q.pop();
        if(curr!=NULL){
            cout << curr->data<<" ";
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
        if(curr == NULL){
            cout << endl;
            if(q.size()>0){   // agar q empty nahi hai to hi usme null dalenge warna nhi dalenge
                q.push(NULL);
            }
        }
    }
}

void printKthLevel(Node* root,int k){

    if(k==1 && root != NULL){
        cout << root->data << " ";
    }

    if(root==NULL){
        return;
    }
    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
}


int main(){

    vector<int> sequence={1,2,4,8,-1,-1,9,-1,-1,5,-1,-1,3,6,-1,10,-1,-1,7,-1,-1};

    Node* root= buildTree(sequence);

    leveOrderTraversal(root);
    cout << endl;  

    printKthLevel(root,3);
    cout << endl;


    
    return 0;
}


// WORKING