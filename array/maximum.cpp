// Find the maximum element in the present array

// 1st method


#include<iostream>
using namespace std;
int main(){
    int arr[]={1,9,3,4,5};
    int check=INT32_MIN;       // taking minimum integer value
    for(int i=0; i<=4; i++){
        if(check<arr[i]){
            check=arr[i];
        }
    }
    cout << check << endl;
    return 0;
}


// 2nd methord



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,5,6,4,9};
//     int max=arr[0];         // array ke first element ko maann liye ki wo sbse chota hai 
//     for(int i=0; i<=6; i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     cout << max << endl;
//     return 0;
// }