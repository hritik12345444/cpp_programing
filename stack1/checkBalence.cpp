// Check wheteher a given bracket sequence is balanced or not?
#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isBalenced(string s){
    stack<char> st;
    int size= s.size();
    for(int i= 0; i<s.size(); i++){
        char curr= s[i];
        if(curr=='(' || curr== '[' || curr== '{'){
            st.push(curr);
        }else{
            if(curr==')' && !st.empty() && st.top()=='('){
                st.pop();
            }else if(curr=='}' && !st.empty() && st.top()=='{'){
                st.pop();
            }else if(curr==']' && !st.empty() && st.top()=='['){
                st.pop();
            }else {
                return false;
            }
        }
    }
    return st.empty();  // at the end agar stack empty ho jay to matlab bracket balenced hai
}

int main(){
    string s = "{()}[()]()";
    cout << isBalenced(s);
    return 0;
}

// important try it one time again