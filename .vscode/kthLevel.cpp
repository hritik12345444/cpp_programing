// print Kth Level element of a Tree
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
        data= d;
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

static int count=0;
void kthLevelOfTree(Node* root, int k){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    if(k < 1){
        cout << "enter a valid value for k !" << endl;
        cout << "please... can't enter a invalid kth value. ThankYou...." << endl;
    }
    while(!q.empty()){
        Node* curr= q.front();
        q.pop();
        if(count == (k-1) && curr != NULL){
            cout << curr->data<< " ";
        }

        if(curr != NULL){
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }

        if(curr==NULL){
            if(!q.empty()){
                q.push(NULL);
                count++;
            }
        }
    }

    return;
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

    vector<int> sequence={1,2,4,8,-1,-1,9,-1,-1,5,-1,-1,3,6,-1,-1,7,11,-1,-1,12,-1,-1};
    Node* root= buildTree(sequence);
    levelOrderTraversal(root);
    cout << endl;
    int k;
    cout << "enter value of k :";
    cin >> k;
    kthLevelOfTree(root,k);
    // cout << root->data << " " << root->left->data<< " "<< root->right->data<<endl;
    return 0;
}