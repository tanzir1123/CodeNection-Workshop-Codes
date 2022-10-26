#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    cout << "-------------------------" << endl;
    
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    
    cout << "-------------------------" << endl;
}

int main(){
    int n = 10;
    vector <int> v(n, -1);

    v.push_back(100);
    print(v);
    v.pop_back();

    cout << "Inserting in the middle:  " << endl;
    v.insert(v.begin() + 3, 2000);
    print(v);
    
    return 0;
}