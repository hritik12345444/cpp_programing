// reverse the elements of a queue.
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

/* phle queue ko stack me dalo
    fir stack ka element ko queue me dalo
    to queue reverse ho jayega
*/

void reverse(queue<int> &q){
    stack<int> st;
    while(! q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(! st.empty()){
        q.push(st.top());
        st.pop();
    }

    return;
}

int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
   
    reverse(q);

    cout << "This is reversed queue" << endl;
    while(not q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;


    return 0;
}

// another method

// int main(){

//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);


//     stack<int> st;
//     while(not q.empty()){
//         st.push(q.front());
//         q.pop();
//     }

//     while(not st.empty()){
//         q.push(st.top());
//         st.pop();
//     }

//     while(not q.empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }
//     return 0;
// }

/// working