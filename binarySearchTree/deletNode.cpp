// delet a node in binary search tree
#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* right;
    Node* left;

    Node(int d){
        data = d;
        right = left = nullptr;
    }
};

// insert a  node in bst
Node* insertInBST(Node* root, int val){
    if(root == nullptr){
        Node* new_node = new Node(val);
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

// buildbst
Node* buildBST(vector<int> sequecne){
    Node* root = nullptr;

    for(int i=0; i<sequecne.size(); i++){
        root = insertInBST(root,sequecne[i]);
    }

    return root;
}

void inOrder(Node* root){
    if(root == nullptr){
        return ;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);

    return;
}

Node* getInorderSuccessor(Node* root){
    while(root != nullptr and root->left != nullptr){
        root=root->left;
    }
    return root;
}

// Delet a node
Node* deletNodeInBST(Node* root,int val){
    if(root == nullptr){
        return nullptr;
    }

    // search the node which want to delet
    if(val > root->data){
        root->right = deletNodeInBST(root->right,val);
    }else if(val < root->data){
        root->left = deletNodeInBST(root->left,val);
    }else{
        // root->data == val   note to be deleted

        if(root->left == nullptr and root->right == nullptr){
            delete root;
            return nullptr;  
        }
        if(root->left == nullptr){
            Node* temp = root->right;
            delete (root);
            return temp;
        }
        if(root->right == nullptr){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root ->right != nullptr and root->left != nullptr){
            Node* IS = getInorderSuccessor(root->right);  // inorder successor hmesa right subtree ke left most child hoga
            root->data = IS->data;
            root->right = deletNodeInBST(root->right,IS->data);
        }

    }

    return root;
}

int main(){

    vector<int> sequen={3,2,1,5,6,4};
    Node* root = buildBST(sequen);
    inOrder(root);
    cout << endl;
    root = deletNodeInBST(root,1);   // delet hoone ke badh original root me update krr diye
    inOrder(root);
    return 0;
}


// NOtes banana hai inorder successor ka