// Given a square matrix turn it by 90 degree in a clockwise direction without using a extra space.
#include<iostream>
#include<vector>
using namespace std;
void ans(vector<vector<int> > &v){
    int n=v.size();
    int m=v[0].size();
    // transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(v[i][j],v[j][i]);
        }
    }

    // this is alos correct for reverse every row


    // for(int i=0; i<n; i++){
    //     int m=v[i].size();
    //     for(int j=0; j<n/2; j++){
    //         int temp=v[i][j];
    //         v[i][j]=v[i][m-j-1];
    //         v[i][m-j-1]=temp;
    //     }
    // }

    // reverse every row without using inbuit function 
    for(int i=0; i<n; i++){
        int m=v[i].size();
        for(int j=0,k=v[i].size()-1; j<k; j++,k--){
            int temp=v[i][j];
            v[i][j]=v[i][k];
            v[i][k]=temp;
        }
    }
    return;
}
int main(){
    int n;
    cout << "enter size of square matrix : ";
    cin >> n;
    vector<vector<int> > v(n,vector<int>(n));
    cout << "enter element`s : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> v[i][j];
        }
    }
    cout << endl;
    ans(v);
    // print 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << v[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}
// complete but inbuilt function not working -->> reverse(v.begin(),v.end()) 