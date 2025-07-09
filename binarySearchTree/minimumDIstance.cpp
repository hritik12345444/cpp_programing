// Minimum distance between BST nodes
#include<iostream>
#include<vector>
#include <climits>   // this is use for INT_MAX and INT_MIN
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left=right=nullptr;
    }
};


Node* insertInBST(Node* root, int val){

    if(root == nullptr){
        Node* new_node= new Node(val);
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

Node* buildTree(vector<int> sequence){

    Node* root = nullptr;
    for(int i=0; i<sequence.size(); i++){
        root = insertInBST(root,sequence[i]);
    }

    return root;
}

void inOrder(Node* root){
    if(root == nullptr){
        return ;
    }

    inOrder(root->left);
    cout << root->data<<" ";
    inOrder(root->right);
}

static int ans = INT_MAX;
Node* prevNode = NULL;

int minDistBtwNodes(Node* root){

    if(root==nullptr){
        return INT_MAX;
    }

    if(root->left != nullptr){
        int leftDist = minDistBtwNodes(root->left);
        ans = min(ans,leftDist);
    }

    // left subtree ko traverse krne ke badh jab root pe aana hoga to uss time previous node left ka sbase choti value ko point krr rha hoga aur min dist nikalne ke liye isse root ke saath compare krte hai 
    if(prevNode != nullptr){
        ans = min(ans,root->data-prevNode->data);
    }
    prevNode = root;

    if(root->right != nullptr){
        int rightDist = minDistBtwNodes(root->right);
        ans = min(ans,rightDist);
    }

    return ans;

}


int main(){

    vector<int> v ={62,52,42,83,88,82};
    Node* root = buildTree(v);
    inOrder(root);
    cout << endl;

    int minDist = minDistBtwNodes(root);
    cout << minDist << endl;

    return 0;
}