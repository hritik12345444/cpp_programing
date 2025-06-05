// impliment queue using stack
// push efficient
#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> st;
public:
    queue() {};

    void push(int ele){         // time o(1)
        this->st.push(ele);
    }

    void pop(){          // time o(n)
        if(this->st.empty()){
            return;
        }
        stack<int> tmp;
        while(this->st.size() > 1){
            tmp.push(this->st.top());
            this->st.pop();
        }
        // in st only 1 element
        this->st.pop();
        while(not tmp.empty()){
            this->st.push(tmp.top());
            tmp.pop();
        }
    }

    bool empty(){
        return this->st.empty();
        // if(st.size()==0) return true;
        // else return false;
    }

    int front(){
        if(this->st.empty()){
            return -1;
        }
        stack<int> temp;
        while(this->st.size()>1){
            temp.push(this->st.top());
            this->st.pop();
        }
        int res= this->st.top();
        while(not temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
        return res;
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