// Morris inorder traversal
// it is an algorithm to traverse a binary tree without recursion and stack isme ek temporary link bnana hota hai usse inorder predecessor kahte hai.
// wo link left subtree ka rightmost node aur root me banta hai usse through root per wapas jaa skte hai

#include<iostream>
#include<vector>
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


static int idx =-1;
Node* buildTree(vector<int> sequence){

    idx++;
    if(sequence[idx]==-1){
        return NULL;
    }

    Node* root= new Node(sequence[idx]);
    root->left = buildTree(sequence);
    root->right = buildTree(sequence);

    return root;
}

void preorder_traversal(Node* root){
    if(root==NULL){
        return;
    }

    cout << root->data<< " ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
    
    return;
}


vector<int> morrisInorderTraversal(Node* root){

    Node* curr = root;
    vector<int> res;

    while(curr != NULL){
        if(curr->left == NULL){
            res.push_back(curr->data);
            curr= curr->right;
        } else{  // curr->left != NULL

            // find inorder predecessorr(ip)
            Node* ip = curr->left;
            while(ip->right != NULL && ip->right != curr){ // topmost right node in left subtree of curr
                // && ip->right != curr check kiye hai taki ip ko curr pe abhi na lee krr chale jaye kyuki abhi left subtree ka kamm baki hai 
                ip = ip->right;
            }
            if(ip->right == NULL && ip->right != curr){  // temperory form a link between ip node and curr node
                // && ip->right != curr check krne ka jarurat nhi hai kyuki ip->right abhi curr ko point nhi krega kyuki while condition me check krr liye hai fir bhi yeha check krna ek aach method hai 
                ip->right = curr;
                curr= curr->left;
            }else{
                ip->right = NULL;   // delet the temporary link because left subtree is complete
                res.push_back(curr->data);
                curr = curr->right;
            }
        }
        
    }

    return res;
}

int main(){

    vector<int> sequece ={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root= buildTree(sequece);
    // preorder_traversal(root);
    cout << endl;
    vector<int> res = morrisInorderTraversal(root);
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}