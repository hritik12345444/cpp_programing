// Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the two arrayss into a single sorted array of size m+n.
#include<iostream>
#include<vector>
using namespace std;
// t_size=7
// v1_size=3
// v2_size =4
// x=7
// i=4
// t_size=7 
// res= 1 2 3 4 6 9 5

int main(){
    vector<int> v1{1,3,5};
    vector<int> v2{2,4,6};
    int t_size=v1.size()+v2.size();
    vector<int> res(t_size);
    //insert v1 vector element in result vector
    for(int i=0; i<v1.size(); i++){
        res[i]=v1[i];
    }
    int x=v1.size();
    // insert v2 vector element in result vector 
    for(int i=0; i<v2.size(); i++){
        res[x]=v2[i];
        x++;
    }
    // sort an array in increasig order 
    for(int i=0; i<t_size; i++){
        bool flag=true;
        for(int j=1; j<t_size; j++){
            if(res[j]<res[j-1]){
              swap(res[j],res[j-1]);
              flag=false;
            }
        }
        if(flag==true){
            break;
        }

    } 
    // print the result array after merge and sort
    for(int i=0; i<t_size; i++){
        cout << res[i] << " ";
    }
    return 0;
}