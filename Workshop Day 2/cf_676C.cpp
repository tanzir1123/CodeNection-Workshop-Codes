//Problem Link: https://codeforces.com/contest/676/problem/C
#include <bits/stdc++.h>
using namespace std;
bool found(string s, int n, int sz, int k){
    int a_cnt = 0, b_cnt = 0;
    for(int i = 0; i < sz; i++){
        if(s[i] == 'a') a_cnt++;
        else b_cnt++;
    }

    if(min(a_cnt, b_cnt) <= k){
        return true;
    }

    int l, r;
    for(l = 1; l < n - sz + 1; l++){
        r = l + sz - 1;
        if(s[l-1] == 'a')
            a_cnt--;
        else 
            b_cnt--;
        
        if(s[r] == 'a')
            a_cnt++;
        else
            b_cnt++;
        
        if(min(a_cnt, b_cnt) <= k){
            return true;
        }
    }

    return false;
}
int solve(string s, int n, int k){

    int ans = 0;
    int l = 0, r = n;
    int m, wndwsize;
    while(l <= r){
        m = l + (r - l) / 2;
        if(found(s, n, wndwsize, k)){
            ans = m;
            l = m + 1;
        }
        else 
            r = m - 1;
    }

    return ans;
}

int main(){
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;

    cout << solve(s, n, k) << endl;
    return 0;
}