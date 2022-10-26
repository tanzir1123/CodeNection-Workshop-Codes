#include <bits/stdc++.h>
using namespace std;
int main(){
    // storing name and study-year

    map <int, pair<string, int>> mp;

    mp.insert({111, {"Ayaan", 2}});
    mp.insert({115, {"Saeb", 2}});
    mp.insert({114, {"Kyle", 2}});
    mp.insert({113, {"Kishen", 3}});
    mp.insert({112, {"Haikal", 2}});    

    for(auto x : mp){
        cout << x.first << " " << x.second.first << " " << x.second.second << endl;
    }

    cout << " printing using iterator " << endl;
    map <int, pair<string, int>> :: iterator it;

    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second.first << " " << it->second.second << endl; 
    }
    return 0; 
}