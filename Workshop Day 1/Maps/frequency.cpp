// counting frequency of numbers in an array 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {111, 101, 102, 111, 100, 101, 102, 103, 111, 102};
    map <int, int> freq;

    int arr_sz = 10;
    for(int i = 0; i < arr_sz; i++){
        freq[arr[i]]++;
    }


    for(auto x : freq){
        cout << x.first << " " << x.second << endl;
    }

    // printing the frequency of 111
    cout << freq[111] << endl;

    return 0;
}