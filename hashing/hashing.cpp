#include<iostream>
#include<list>
#include<vector>
using namespace std;

class hashing{
    vector<list<int>> hashTable;  // ek vector hai jisme at every index has a linked list
    int bucket;
public:
    hashing(int s){
        this->bucket= s;
        hashTable.resize(s);
    }

    int hashValue(int key){
        return key%bucket;     // return index where that key is stored
    }

    void addKeys(int key){
        int idx= hashValue(key);
        hashTable[idx].push_back(key);
        return;
    }

    list<int>:: iterator searchKey(int key){
        int idx= hashValue(key);
        // return find(hashTable[idx].begin(), hashTable[idx].end(),key);
        for(auto i=hashTable[idx].begin(); i!=hashTable[idx].end();i++){
            return find(key);
        }
    }

    
};

int main(){
    return 0;
}


// Not complete
// find function is not working