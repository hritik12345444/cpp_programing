// Sun of repetitive Elements

/* You are given an integer n,  representing the number of elements. Then, you will be given n elements. You have to return the sum of repetitive elements i.e. the elements that appear more than one time.
 */

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{

    int n;
    cout << "enter n:";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter element :";
        cin >> v[i];
    }
    
    //Q. 1 1 2 1 3 3 3 -> ans is 4
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        // agar map me key present nhi hai to map me value ko inset krega (by default key ka value 0 hota hai). ++ krrke use hmm 1 se badha rhe hai.
        mp[v[i]]++;  // mp[1]++ = mp[1] hai to uska value ko ek se badha do jitna bar wo element milega utna bar ek se badha denge
    }

    // print the map
    // for (auto pair : mp)
    // {
    //     cout << pair.first << "-" << pair.second << endl;
    // }

    int sum=0;
    for(auto pair:mp){
        if(pair.second > 1){
            sum+=pair.first;
        }
    }

    cout << "Ans-> " << sum << endl;

    return 0;
}