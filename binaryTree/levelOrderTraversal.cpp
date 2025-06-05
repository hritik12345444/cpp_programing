// level order traversal
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

static int idx= -1;
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

void leveOrderTraversal(Node* root){

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* curr= q.front();
        q.pop();

        cout << curr->data<< " ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    return;
}

int main(){
    vector<int> sequence={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root= buildTree(sequence);

    leveOrderTraversal(root);
    return 0;
}

// Working