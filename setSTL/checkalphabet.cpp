/* Check if string has all english alphabets
Given a string. You have to check if it has all english aphabets from a-z;

input  abCdefGhIjkLmnopqRStuVwxYz
output yes
*/

#include<iostream>
#include<string>
#include<set>
using namespace std;

bool checkALphabet(string str){
    if(str.size() < 26){
        return false;
    }

    for(int i=0; i<str.size(); i++){  //convert all alphabet into uppercase
        str[i]= toupper(str[i]);
    }
    

    set<int> st;
    for(char ch : str){
        st.insert(ch);
    }

    return st.size()==26;
}

int main(){
    string str;
    cout << "enter a string ";
    cin >> str;

    bool res= checkALphabet(str);
    if(res == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

// working
// important points:  agar string ka size 26 se kam ho to uss string me total alphabet nhi hoga but jada ho to string me same element jada hoga to hmm string ko set me dal denge to set me only 26 charecter hi aayega kyuki set unique value ko accept krta hai aur kisi lo nhi 