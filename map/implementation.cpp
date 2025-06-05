#include<iostream>
#include<map>
using namespace std;

int main(){
    
    // greater key word use to store a pair in descending order

    // map<string,int , greater <string>  > mp={{"Aman",345},{"naman",333},{"shatrudhan",356},{"hritik",8383}};
    map<string,int> mp={{"Aman",345},{"naman",333},{"shatrudhan",356},{"hritik",8383}};

    
    for(auto ele : mp){  // for each loop
        cout << ele.first << "-" << ele.second<< endl;
    }
    cout << endl;

    // mp.erase("hritik");  // this function will be delete the pair
    // mp["Aman"]=1111; // updated aman's values
    // mp.insert(make_pair("shat",111));  // create new pair and insert in map

    for(auto ele : mp){
        cout << ele.first << "-" << ele.second<< endl;
    }

    return 0;
}