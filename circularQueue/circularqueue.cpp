#include<iostream>
using namespace std;

#define SIZE 5

class circularQueue{
private:
    int items[SIZE];
    int front, rear;
public:
    circularQueue(){
        front=-1;
        rear= -1;
    }

    // check if the queue is full
    bool isFull(){
        return (front ==0 && rear == SIZE-1) || (rear == (front-1 + SIZE)%SIZE);
    }

    // check if the queue is empty
    bool isEmpty(){
        return front == -1;
    }

    // Enqueue element
    void enqueue(int ele){
        if(isFull()){
            cout << "Queue is full" << endl;
            return;
        }

        if(isEmpty()){
            front=rear=0;
        }else if(rear == SIZE-1 && front !=0){
            rear=0;
        }else{
            rear++;
        }
        items[rear] = ele;
        cout << "Inserts " << ele << endl;
    }

    // Dequeue element
    int dequeue(){
        if(isEmpty()){
            cout << "queue is Empty" << endl;
            return -1;
        }
        int data= items[front];
        items[front] = -1;

        if(front==rear){
            front=rear=-1;  // Queue has only one element
        }else if(front == SIZE -1){
            front=0;
        }else{
            front++;
        }
        return data;
    }

    // Display the queue
    void display(){
        if(isEmpty()){
            cout << "Queue is empty " << endl;
            return;
        }

        cout << "Queue elements are : ";
        if(rear>= front){
            for(int i=front; i<=rear; i++){
                cout << items[i] << " ";
            }
        }else{
            for(int i=front; i<SIZE; i++){
                cout << items[i] << " ";
            }
            for(int i=0; i<=rear; i++){
                cout << items[i] << " ";
            }
        }
        cout << endl;
    }

};

int main(){

    circularQueue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5); // Should say queue is full

    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    q.enqueue(6);
    q.display();
    return 0;
}


/*bass phone ke use se code likh diye hai concept clear nhi hua hai 
circular queue ka use nhi hota hai abb kabhi kabhi interview me puch leta hai ye queue to iske bare me janna jaruri hai */
