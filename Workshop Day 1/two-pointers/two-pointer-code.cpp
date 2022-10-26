#include <bits/stdc++.h>
using namespace std;

bool isthere(vector<int> &v, int n, int r)
{

    int i = 0; 
    int j = n-1;
    int cur_sum = 0;
    
    while(i < j){
        cur_sum = v[i] + v[j];

        if(cur_sum == r)
            return true;
        else if(cur_sum < r)
            i++;
        
        else
            j--;
    }
    
    return false;
}

int main()
{
    vector<int> v = {1, 2, 7, 3, 1, 9};
    // sort it first:
    sort(v.begin(), v.end());
    int n = 6;
    int r = 12;
    
    cout <<  isthere(v, n, r) << endl;

    return 0;
}
