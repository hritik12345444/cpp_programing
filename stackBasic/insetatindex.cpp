// Insert at any index
#include<iostream>
#include<stack>
using namespace std;

// using while loop
void insertAtIndex(stack<int> &st, int val, int idx){

    int size= st.size(); // size nikalna jaruri hai kyuki ki jab stack ka element ko pop ya push krenge to size increase/decrease hoga to st.size() wrong answer btayega
    int len= 0; // st.size();
    stack<int> temp;

    // check for given index is valid or not
    if(idx < 0 || idx >= size){
        cout << "invalid index"<< endl;
        return;
    }
    while(len < (size-idx)){
        temp.push(st.top());
        st.pop();
        len++;
    }
    st.push(val);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    return;
}

// using for loop


// void insertAtIndex(stack<int> &st, int val, int idx){
//     stack<int> tempStack;
//     int size= st.size();
//     if(idx <0 || idx >= size){
//         cout << "Invalid index" << endl;
//         return;
//     }

//     for(int i=0; i<size-idx; i++){
//         tempStack.push(st.top());
//         st.pop();
//     }

//     st.push(val);
//     while(!tempStack.empty()){
//         st.push(tempStack.top());
//         tempStack.pop();
//     }
//     return;
// }

void display(stack<int> st){
    while(!st.empty()){
        cout << st.top()<< endl;
        st.pop();
    }
    cout << endl;
    return;
}
int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << "original stack" << endl;
    display(st);
    insertAtIndex(st,10,-1);
    cout << "Modified stack "  << endl;
    display(st);

    // for printing
    // while(!st.empty()){
    //     cout << st.top() << endl;
    //     st.pop();
    // }
    return 0;
}