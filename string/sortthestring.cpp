// Given a str, sort the given string.
// Constraints: The string will contain only alphabetical characters from a-z.
// Input "codingwallah"  ->  "aacdghillnow"
// Input "star"  ->  "arst";

// if we use count sort than time complexity is o(n+k) but here we use selection sort than time complexity is o(n^2);

#include<iostream>
#include<vector>
#include<string>
using namespace std;
void sort(string &str){
    int s_n= str.size();
    // create a array of string size and fill that with str ascii value
    vector<int> arr(s_n);
    for(int i=0; i<s_n; i++){
        arr[i] = int(str[i]);
    }
    // sorting alogorithm apply
    // selection sort apply
    for(int i=0; i<s_n; i++){
        int min_ele_idx=i;
        for(int j=i+1; j<s_n; j++){
            if(arr[j] < arr[min_ele_idx]){
                min_ele_idx=j;
            }
        }
        if(min_ele_idx != i){
            swap(arr[i],arr[min_ele_idx]);
        }
    }
    // reformed the string in asscending order
    for(int i= 0; i<s_n; i++){
        str[i] = char(arr[i]);
    }
    return;
}
int main(){
    string str;
    cout << "enter a string ";
    cin >> str;
    sort(str);
    cout << "your output is : " << str;
    return 0;
}