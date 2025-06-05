// uisng linked list implement the queue
#include<iostream>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int data){
        value= data;
        next = NULL;
    }
};

class queue{
    node* head;
    node* tail;
    int size;
public:
    queue(){
        head= NULL;
        tail= NULL;
        size= 0;
    }

    void enqueue(int ele){
        node* new_node= new node(ele);
        if(head==NULL){  // check ll is empty or not
            head= new_node;
            tail= new_node;
        }
        else{
            tail->next = new_node;
            tail= new_node;
        }
        size++;  // when added a new element in queue than size is increase 
    }

    void dequeue(){
        if(this->head==NULL){ // check ll is empty or not 
            return;
        }else{
            node* temp= this->head;
            this->head= this->head->next;
            free(temp);
        }
        size--; // when remove the element than size is decrease
    }

    int front(){
        if(head==NULL){
            return -1;
        }else{
            return head->value;
        }    
    }

    bool isEmpty(){
        if(head==NULL){
            return true;
        }
        else return false;
        // return head==NULL;
    }

    int back(){
        if(head==NULL) {
            return -1;
        }else{

            return tail->value;
        }
    }

    int getSize(){
        if(head== NULL){
            return -1;
        }else{
            return size;
        }
    }

};

int main(){

    queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.dequeue();    // remove first element
    qu.enqueue(50);

    cout << qu.getSize() << endl;   // print size of queue
    cout << qu.front() << endl;    // print first element
    cout << qu.isEmpty() << endl;  // check queue is empty or not
    cout << qu.back() << endl;     // print last element of queue
    while(not qu.isEmpty()){       // print whole queue
        cout << qu.front() << " ";
        qu.dequeue();
    }
    cout << endl;
    return 0;
}

// not working