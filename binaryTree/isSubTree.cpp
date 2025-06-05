// subTree of Another Tree

// subTree ka matlab dosra tree hai wo phla tree me same to same present hona chahiye with same branches and values not any one different 
// 1.  phle first tree me wo element dhundhan hai jo ki 2nd tree ka first element se mathch kre
// 2. uske badh miljayega to check krenge ki dono identical hai ya nhi identical hua to true retrun krrenge else false return krenge
#include<iostream>
#include<vector>
using namespace std;
static int idx= -1;

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


void reset(){
    idx=-1;
    return;
}



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

bool isSame(Node* root1, Node* root2){


    if(root1 == NULL && root2 != NULL){
        return false;
    }
    if(root1 != NULL && root2 == NULL){
        return false;
    }
    if(root1 ==NULL || root2 ==NULL){
        return root1 == root2;
    }

    bool leftCheck= isSame(root1->left,root2->left);
    bool rightCheck= isSame(root1->right,root2->right);

    return leftCheck && rightCheck && root1->data == root2->data;
}


bool isSubtree(Node* root, Node* subRoot){
    if(root->data == subRoot->data){
        return isSame(root,subRoot);
    }

    if(root==NULL || subRoot==NULL){
        return root==subRoot;
    }

    bool leftCheck= isSubtree(root->left,subRoot);
    bool rightCheck= isSubtree(root->right,subRoot);

    return leftCheck || rightCheck;  // yeha or ka condition isiliye diye hai ki subRoot hai wo root me ya to left side milega ya fir right side milega dono me se kisi ek side hi millega
}

// Traverse in preorder
void preorder(Node* root){  

    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


int main(){

    vector<int> sequence1={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* tree1= buildTree(sequence1);
    reset();

    vector<int> sequence2= {3,4,-1,-1,5,-1,-1};
    Node* tree2= buildTree(sequence2);
    reset();

    preorder(tree1);
    cout << endl;
    preorder(tree2);
    cout << endl;

    cout << (isSame(tree1,tree2) ? "yes, A subTree found" : "No, not found any subTree");

    // cout << tree1->data<<" " << tree2->data<< endl;
    return 0;
}