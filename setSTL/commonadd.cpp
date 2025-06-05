/* Add the common elements
Given 2 vectors v1 and v2. Find out the commmon elements between the two and return the sum of them.
*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){

    vector<int> v1={1,1,7,2,3,3};
    vector<int> v2={5,6,7,5,2,3,6};

    set<int> s1;
    set<int> s2;
    set<int> comm;

    // inset element of vector in s1
    for(int i=0; i<v1.size(); i++){    // 1 2 3
        s1.insert(v1[i]);
    }
    
    // inset element of vector in s2
    for(int i=0; i<v1.size(); i++){  // 5 6 7 2 3 6
        s2.insert(v2[i]);
    }

    int res=0;
    // set<int> :: iterator itr;
    // itr= s1.begin();
   
    for(int ele : s1){
        if(s2.find(ele) != s2.end()){  // agar element milll jaye s2 me to s2.end() per kabhi nhi jayega agar s2 me element nhi mila to s2.end() per chala jayeag
            // res+= ele;
            comm.insert(ele);
        }
    }

    for(int ele: comm){  // add element which is present in comm set 
        res+=ele;
    }

    cout << "Sum of the common elements : " <<  res << endl;
    return 0;
}