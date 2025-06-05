#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string encodedString(string s){
    string res="";
    for(int i=0; i<s.size(); i++){
        if(s[i] !=']'){
            res.push_back(s[i]);
        }
        else{
            string str="";
            int j=res.size()-1;
            while(res[j]!='[' && !res.empty()){
                str.push_back(res[j]);
                res.pop_back();
                j--;
            }
            // reversing the str 
            reverse(str.begin(),str.end());
            
            res.pop_back();
            j--;
            string num="";
            while(res[j] >= '0' && res[j]<='9' && !res.empty()){
                num.push_back(res[j]);
                res.pop_back();
                j--;
            }
            // reverse num
            reverse(num.begin(),num.end());
            int numtime = stoi(num);
            while(numtime > 0){
                res+= str;
                numtime --;
            }
        }
    }
    return res;
}
int main(){
    string s;
    cout << "enter a string \n";
    cin >> s;
    cout << encodedString(s) << endl;
    return 0;
}
// complete my self 