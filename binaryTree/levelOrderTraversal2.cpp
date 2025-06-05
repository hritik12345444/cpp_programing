// levelOrderTraversal 2
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


// levelOrderTraversal
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

int main(){
    vector<int> sequence={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root= buildTree(sequence);

    levelOrderTraversal(root);
    return 0;
}
//   1
// 2  3
//    4 5