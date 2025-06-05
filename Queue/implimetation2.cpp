// impliment queue using array
#include<iostream>
#include<vector>
using namespace std;

class queue{
    vector<int> v;
    int front;
public:
    queue(){
        front = -1;
    }

    void enqueue(int ele){
        if(front == -1){
            front++;
        }
        v.push_back(ele);
        return;
    }

    void dequeue(){
        if(v[front] == v.back()){
            front--;
            v.erase(v.begin());  // erease the first element

        }
        if(v.empty()){  //kjhgkhgkjnk
            return;
        }else{
            v.erase(v.begin());  // erease the first element
            front++;
        }
        return;
    }

    int getFront(){
        if(v.empty()){
            return -1;
        }else{
            return v[0];
        }
    }

    bool isEmpty(){
        // if(v.empty()){
        //     return true;
        // }else {
        //     return false;
        // }
        return v.empty();
    }

    int back(){
        return v.back();
    }

    int getSize(){
        return v.size();
    }
};

int main(){

    queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    // qu.enqueue(50);

    // cout << qu.getSize() << endl;   // print size of queue
    // cout << qu.getFront() << endl;    // print first element
    // cout << qu.isEmpty() << endl;  // check queue is empty or not
    // cout << qu.back() << endl;     // print last element of queue
    while(not qu.isEmpty()){
        cout << qu.getFront() << " ";
        qu.dequeue();
    }

    return 0;
}

// not working