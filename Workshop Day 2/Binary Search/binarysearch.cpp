#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
   
    int l = 0, r = n - 1;

    while (l <= r) {
        int m = l + (r - l) / 2; 
    
        if (arr[m] == x)
            return m;
 
        if (arr[m] < x)
            l = m + 1;
 
        else
            r = m - 1;
    }
 

    return -1;
}
 
 
int main(){
    int arr[] = { 1, 2, 10, 15, 18 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 12;
    int result = binarySearch(arr, n, x);
    
    if(result == -1)
         cout << "Not Found" << endl;
    
    else
         cout << "Index: " << result << endl;

    return 0; 
}