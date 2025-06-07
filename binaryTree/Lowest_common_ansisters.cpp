// Find lowest common ansisters
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

static int idx=-1;
Node* buildBinaryTree(vector<int> sequence){
    idx++;
    if(sequence[idx]==-1){
        return NULL;
    }

    Node* root= new Node(sequence[idx]);
    root->left = buildBinaryTree(sequence);
    root->right = buildBinaryTree(sequence);

    return root;
}

void levelOrderTraversal(Node* root){
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


Node* findLCA(Node* root, int p, int q){
    
    if(root==NULL){
        return NULL; 
    }
    if(root->data==p || root->data == q){
        return root;
    }

    Node* leftLca = findLCA(root->left,p,q);
    Node* rightLca = findLCA(root->right,p,q);


    // ye condition last me return krne ke liye hai ki ko sa lca hai 
    if(leftLca != NULL and rightLca != NULL){
        return root;
    }
    else if(leftLca != NULL){
        return leftLca;
    }
    else if(leftLca == NULL and rightLca==NULL){
        return NULL;
    }
    
    else {
        return rightLca;
    }

}

int main(){

    vector<int> sequence={1,2,4,-1,-1,5,8,-1,-1,9,-1,-1,3,6,-1,-1,7,-1,-1};

    Node* root= buildBinaryTree(sequence);
    levelOrderTraversal(root);
    cout << endl;

    int p= 8;
    int q= 7;
    Node* LCA_node = findLCA(root,p,q);
    cout << LCA_node->data;
    cout << endl;

    return 0;
}

// WORking