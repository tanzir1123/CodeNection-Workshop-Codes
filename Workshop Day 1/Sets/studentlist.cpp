#include <bits/stdc++.h>
using namespace std;
void printset(set <string> &s){
    cout << "\n--------------------" << endl;
    
    for(auto i : s){
        cout << i << " ";
    }

    cout << "\n---------------------" << endl;
}

int main(){
    set <string> ids;
    
    string str;
    cout << "Start inserting the student Ids :" << endl;
    while(cin >> str){
        ids.insert(str);
    }

    cout << "Here's the students' list: " << endl;
    printset(ids);


    return 0; 
}