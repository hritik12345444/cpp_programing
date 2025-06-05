#include<iostream>
#include<vector>
using namespace std;
class queue{
    int front;
    int back;
    vector<int> v;
public:
    queue(){
        front=-1;
        back=-1;

    }

    void enqueue(int data){
        v.push_back(data);
        back++;
    }

    void dequeue(){
        if(front == back){
            front = -1;
            back = -1;

        }else{
            front++;
        }
    }

    int getfront(){
        if(front == -1) return -1;
        return v[front];
    }

    bool isEmpty(){
        return front==-1;
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

    // cout << qu.getSize() << endl;   // print size of queue
    cout << qu.getfront() << endl;    // print first element
    cout << qu.isEmpty() << endl;  // check queue is empty or not
    // cout << qu.back() << endl;     // print last element of queue
    while(not qu.isEmpty()){       // print whole queue
        cout << qu.getfront() << " ";
        qu.dequeue();
    }
    cout << endl;
    return 0;
}