#include <bits/stdc++.h>
using namespace std;
int main(){
    map <int, string> mp;
    mp.insert({111, "Ayaan"});
    mp.insert({115, "Saeb"});
    mp.insert({114, "Kyle"});
    mp.insert({113, "Kishen"});
    mp.insert({112, "Haikal"});

    for(auto it : mp)
        cout << it.first << " " << it.second << endl;


    return 0;
}