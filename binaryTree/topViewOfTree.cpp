// Top view of the binary tree

// currHD= current Horizontal Distance
// agar queue me ek pair store krna hai to ek curley ({}) braces ke andar likhna hoga

#include<iostream>  // This is for output and input
#include<vector>   // This is for take a sequence of int value to make a tree
#include<queue>   // This is for level order travesal and store a pair of node and integer value
#include<map>    // This is for find uniqueness using horizontal distance because map store a unique value 
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

    Node* root=new Node(sequence[idx]);
    root->left= buildBinaryTree(sequence);
    root->right= buildBinaryTree(sequence);

    return root;
}

void topViewOfTree(Node* root){

    queue <pair<Node*,int>> q; // Here store a pair of {node and a integer value}  
    map<int,int> m;
    q.push({root,0});  // queue me pair ko push krne ke liye curley braces ke andar likhan hota hai

    while(!q.empty()){

        Node* currNode= q.front().first;  // holds a  node 
        int currHD= q.front().second;  // holds a integer value
        q.pop();

        if(m.find(currHD) == m.end()){
            m[currHD]= currNode->data;
        }

        if(currNode->left != NULL){
            q.push({currNode->left,currHD-1});
        }

        if(currNode->right != NULL){
            q.push({currNode->right,currHD+1});
        }

    }

    for(auto it : m){
        cout << it.second << " ";
    }
}


// This is for printing level by level 
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

int main(){

    vector<int> sequence={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root= buildBinaryTree(sequence);

    topViewOfTree(root);
    // leveOrderTraversal(root);
    cout << endl;

    
    return 0;
}