// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// Constraints : String s and t will only contain lowercase alpabetical characters.
// Input : s= "anagram" , t = "nagaram"

// --> anagram means re-arrange the letter which comes the another word but every element is same and also count is equall.
#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool checkthe(string &s1, string &s2){
    int s1_n= s1.size();
    int s2_n= s2.size();
    if(s1_n != s2_n){
        return false;
    }else{
        vector<int> freq(26,0);

        // both loop are correct we use anyone 

        // for(int i=0; i<s1.size(); i++){
        //     freq[(int(s1[i])) - 97]++;
        //     freq[(int(s2[i])) - 97]--;
        // }
        for(int i=0; i<s1.size(); i++){
            freq[s1[i] - 'a'] ++;  // s1[i] me se a ka ascii value ko minus krr rhe hai taki frequency arrya me 0 se 26 tkk me sbb fill ho jaye 
            freq[s2[i] - 'a'] --;
        }
        for(int i=0; i<freq.size(); i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    string s1="anagram";
    string s2="nagaram";
    if(checkthe(s1,s2) == true){
        cout << "yes this is an anagram";
    }else{
        cout << "No, this is no anagram ";
    }
    return 0;
}