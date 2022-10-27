#include <bits/stdc++.h>
using namespace std;
void printset(set <int> &s){
    cout << "\n--------------------" << endl;
    
    for(auto i : s){
        cout << i << " ";
    }
    
    cout << "\n---------------------" << endl;
}

int main(){
    set <int> s;

    s.insert(2);
    s.insert(9);
    s.insert(10);
    s.insert(10);
    s.insert(8);
    s.insert(5);
    
    //iterator is an object points to element in a container : set, vector, map, ...
    //similar to pointer.
    set <int>:: iterator it;  
    for(it = s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }

    printset(s);

    s.erase(10); // deletes in O(logn);
    printset(s);

    it = s.find(100);

    
    cout << *(--it) << endl;


    return 0; 
}