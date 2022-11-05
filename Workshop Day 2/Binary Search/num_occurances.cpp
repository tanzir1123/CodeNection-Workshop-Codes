//Finding the number of occurrence of an element in a sorted array.
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
   
    int l = 0, r = n - 1;
    int idx = -1;

    while (l <= r) {
        int m = l + (r - l) / 2;
        
        if (arr[m] == x){
            idx = m;
            r = m - 1;
        }
            
 
        else if (arr[m] < x)
            l = m + 1;
 
        else
            r = m - 1;
    }
 

    return idx;
}
 
int main(){
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 4, 4, 5, 6, 7};

    int n = sizeof(arr)/ sizeof(arr[0]); //array's size
    int x = 4;

    cout << "The leftmost occurance of "
        << x << " is : " << binarySearch(arr, n, 4) << endl;

    return 0; 
}