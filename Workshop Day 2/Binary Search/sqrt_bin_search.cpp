#include <bits/stdc++.h>
using namespace std;

double sqrtfind(int n)
{
    
    int l = 0, r = n;
    int ans = -1; 

    while (l <= r) {
        int m = l + (r - l) / 2.0;
        
        if (m * m == n){
            ans = m;
            break;
        }
 
        if (m*m < n){
            l = m + 1;
            ans = m;
        }
            
 
        else
            r = m - 1;
    }
 

    return ans;
}
 
 
int main(){
    int n = 17;
    cout << "here's the sqrt: " << sqrtfind(n) << endl;

    return 0; 
}