// Find if it's possible to find a given value as a sum of subarray of the given array.
#include <bits/stdc++.h>
using namespace std;
bool slidingwindow(int arr[], int n, int x){
    int l = 0, r = 0;
    int sum = arr[0];
    for(l = 0; l < n; l++){

        while(sum < x && r < n){ // keep moving forward until you find sum >= x
            sum += arr[r];
            r++;
        }
        if(sum == x)
            return true;
        
        sum -= arr[l];
    }

    return false;
}

int main(){
    int arr[] = { 1, 2, 7, 4, 9, 1, 11, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 13;
    cout << "Possible to find " << x << "? ";
   
    cout << slidingwindow(arr, n, x) << endl;
    return 0;
}
// Time complexity? 