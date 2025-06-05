#include<iostream>
using namespace std;

string decodedString(string s){

    string result="";
    for(int i=0; i<s.length(); i++){

        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{
            string str="";
            while(!result.empty() and result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }

           // reverse(str.begin(),str.end());
            for(int j=0,k=str.size()-1; j<k; j++,k--){
                swap(str[j], str[k]);
            }
            result.pop_back();
            string num="";
            while( (result.back() >='0' && result.back()<='9')){ // change something
                num.push_back(result.back());
                result.pop_back();
            }

            for(int j=0,k=num.size()-1; j<k; j++,k--){
                swap(num[j], num[k]);
            }
            // reverse(num.begin(),num.end());
            int intnum=2;

            while(intnum){
                result += str;
                intnum --;
            }

        }
    }
    return result;
}

int main(){
    string str = "2[b2[ca]]";
    // cout << "enter a string \n";
    // cin >> str;
    cout << decodedString(str) << endl;
}
// cheat from youTube