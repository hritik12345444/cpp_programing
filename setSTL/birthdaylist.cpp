/* Cherry's birthday is coming this month! She wants to plan a Birthday partry and is preparing an invite list with her friend Aashi. She asks AAashi to tell her names to add to the list.
Aashii is a rnadom guy and keeps coming up with names of people randomly to add to the invite list, enven if the name is already on the list, even if that name is already on the list! Cherry hates redundancy and hence, enlists the names only once.
Find the final invite-list, that contain names withour any repetition.

Input 
First line of each test contains an inter N, the number of names that Aashi pops up with.

Output
Output the final invite-list with each name in a new line. The names in the final invite-list are sorted lexicographically.

*/

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<string> invititaion_list;
    int n;
    cout << "How many name you want : " ;
    cin >> n;

    int i=1;
    while(i<=n){   // ya fir (n--) bhi likh skte hai condition me , jabtak n!=0 nhi hoga tbb tkk loop chalega
        string name;
        cout << "Enter name : ";
        cin >> name;
        invititaion_list.insert(name);
        i++;
    }

    cout << endl;
    cout << "Invitation list" << endl;

    set <string>:: iterator itr; // create a iterator
    for(itr=invititaion_list.begin(); itr!=invititaion_list.end(); itr++){
        cout << *itr << endl;
    }

    return 0;

}


// working
// enter few name in set and print them 