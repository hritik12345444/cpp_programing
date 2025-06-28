// Search a node in BST return true if it is present else return false

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

Node* insertInBST(Node* root, int val){
    if(root == nullptr){
        return new Node(val);
    }
    
}