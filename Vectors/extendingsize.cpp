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
    vector <int> v;
    for(int i = 0; i < 4; i++){
        v.push_back(i+1);
    }

    cout << v.capacity() << endl; // 4
    v.push_back(100);

    cout << v.capacity() << endl; //

    v.resize(8, -1);  //1, 2, 3, 4, 100, -1, -1, -1
    print(v);
    v.resize(10);     //1, 2, 3, 4, 100, -1, -1, -1, 0, 0 
    
    cout << v.capacity() << endl;

    return 0;
}