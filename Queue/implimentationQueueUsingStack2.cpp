// impliment queue using stack
// pop efficient
#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int> st;
public:
    queue(){};
    
    void push(int ele){
        if(this->st.empty()){
            this->st.push(ele);
            return;
        }

        stack<int> temp;
        while(!this->st.empty()){
            temp.push(this->st.top());
            this->st.pop();
        }
        this->st.push(ele);
        while(!temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
        return;
    }

    void pop(){
        if(st.empty()){
            return;
        }
        else  st.pop();
        return;
    }

    bool empty(){
        return st.empty();
    }

    int front(){
        return this->st.top();
    }
};

int main(){
    queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    // qu.pop();
    while(not qu.empty()){
        cout << qu.front() << " ";
        qu.pop();
    }
    return 0;
}

// working