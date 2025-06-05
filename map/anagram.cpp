/*  Check wheter two strings are anagram of each other. Return true if they are else retrun false . An anagram of a string is another string that contains the same characters. Only the order of characters can be different. For example, "abcd" and "dabc" are an anagram of each other.

    INPUT triangle   integral     OUTPUT: True
    INPUT anagram   grams    OUTPUT: False
*/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isAnagram(string s1, string s2)
{

    if (s1.size() != s2.size())
    { // if size of both string is equal than return true
        return false;
    }

    unordered_map<char, int> m;
    // unordered_map<char,int> :: iterator itr;
    for (auto ch : s1)
    { // string 1 ka frequency and charactor dono insert krr diye map me
        m[ch]++;
    }

    for (auto ch : s2)
    {  // string 2 ka charector ko lega aur agar map me hoga phle se to uska frequency ko 1 se minus krr dega
        m[ch]--;
    }

    // for(auto pair:m){     // print the map
    //     cout << pair.first<< " " << pair.second << endl;
    // }

    for (auto pair : m)
    {
        if (pair.second > 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    string s1, s2;
    cout << "enter 1st & 2nd strings : ";
    cin >> s1 >> s2;
    cout << (isAnagram(s1, s2) ? "True" : "False") << endl;

    return 0;
}


// WORKING