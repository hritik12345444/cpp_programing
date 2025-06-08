// Find  maximum width of binary tree
// Maximum width of binary tree -> means harek level me jitne bhi nodes ho sakte hai (includingg null positions ), unka count
// complete binary tree ka width find krne ke liye index ka jarurat hota hai usse ptta chalta hai ki kis level per kitna nodes ho skte hai 
// index ke through kaise ptta kre ki kitna nodes ho skte hai iss level pe ?
// to solution:- uss level ka last node ka index - uss level ka first node ka index + 1 (endIdx - startIdx + 1) . This is called total cound of node in each level 

// level order traversal ke through iss question ko aasani se solve krr skte hai

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>    // sometime use for math functions like max of two number 
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


// build a binary tree
Node* buildTree(vector<int> sequence , int &idx){
    idx++;
    if(sequence[idx]==-1){
        return NULL;
    }

    Node* root= new Node (sequence[idx]);
    root->left = buildTree(sequence,idx);
    root->right= buildTree(sequence,idx);

    return root;
}


// For printing
void preorder(Node* root){

    if(root==NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

    return;
}

int maximum_width_of_tree(Node* root){

    // unsigned long long ka matlab integer value store krega bhut bara int tkk only positive integer value because we use here unsigned 
    queue<pair<Node* , unsigned long long >> q;
    q.push({root,0});  // 0 is the index of root node
    int max_width = 0;

    while(!q.empty()){
        unsigned long long start = q.front().second;
        unsigned long long end = q.back().second;

        int size = q.size(); // size ka jarurat tbb prega jab ek bar me ek level ka pura node ko queue me store krna ho for loop me krenge 

        max_width = max(max_width, (int)(end-start+1));

        for(int i=0; i<size; i++){
            auto curr = q.front();  /// this is pair of fornt pair of queue 
            q.pop();
            int idx = curr.second;

            if(curr.first->left != NULL){
                q.push({curr.first->left, 2*idx+1});
            }
            if(curr.first->right != NULL){
                q.push({curr.first->right, 2*idx+2});
            }

        }
    }

    return max_width;
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
    vector<int> sequence={1,3,5,-1,-1,3,-1,-1,2,-1,9,-1,-1};

    int idx=-1;
    Node* root= buildTree(sequence , idx);
    levelOrderTraversal(root);
    cout << endl;
    int res = maximum_width_of_tree(root);

    cout << "Maximu_width " << res << endl;
    cout << endl;
    return 0;
}