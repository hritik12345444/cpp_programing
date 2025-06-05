// calculate diameter of tree . Diameter :- maximum distance between 2 lives node

/*
   staring me leftroot ka height + rightRoot ka heigh nikalenge fir hmm compare krenge ki leftheight + rightHeight agar ans se jada ho to kuch time ke liye ye ans ho jayega fir yehi process baar barr chalayeng jbb tk pura tree traverse na ho jaye
*/
#include<iostream>
#include<vector>
using namespace std;

int ans=0;  // global variable

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
    

static int idx=-1;  // It's also a global variable
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

int height(Node* root){  // this is not for calculating height this function is help us to calculate diameter of tree

    if(root==NULL){
        return 0;
    }

    int lefthig= height(root->left);
    int righthig= height(root->right);

    ans= max((lefthig+righthig),ans);   // here calculate diameter of tree


    return max(lefthig,righthig) + 1;
}
    

int diameterOfTree(Node* root){

    int res= height(root);
    return ans ;
}



// 2nd method

// int diameterOfTree(Node* root){

//     if(root == NULL){
//         return 0;
//     }

//     int leftDiam = diameterOfTree(root->left);
//     int rightDiam = diameterOfTree(root->right);
//     int currDiam =  height(root-height(root->left) +>right);
//     return max(currDiam,max(leftDiam,rightDiam));
// }


int main(){
    vector<int> sequence={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root= buildTree(sequence);

    int diameter= diameterOfTree(root);
    cout << "Diameter : " << diameter << endl;
    return 0;
}