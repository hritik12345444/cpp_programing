// All path of a binary tree
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
    root->left=  buildTree(sequence);
    root->right= buildTree(sequence);

    return root;
}

void allPathfunction(Node* root, string path, vector<string> &ans){
    
    if(root->left == NULL && root->right==NULL){
        ans.push_back(path);
        return;
    }

    allPathfunction(root->left,path+"->"+to_string(root->left->data),ans);
    allPathfunction(root->right,path+"->"+to_string(root->right->data),ans);

    return;
}

vector<string> allPath(Node* root){
    string path= to_string(root->data);
    vector<string> ans;

    allPathfunction(root,path,ans);

    return ans;
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

int main(){
    vector<int> sequence={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root= buildTree(sequence);
    // preorder(root);
    cout << endl;
    vector<string> res= allPath(root);

    for(int i=0; i<res.size(); i++){
        cout << res[i] << endl;
    }

    return 0;
}

// Working