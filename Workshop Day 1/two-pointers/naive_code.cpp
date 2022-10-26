#include <bits/stdc++.h>
using namespace std;

bool isthere(int arr[], int n, int r)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] + arr[j] == r){
                cout << arr[i] << "," << arr[j] << endl;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int a[6] = {1, 2, 7, 3, 1, 9};
    int n = 6;
    int r = 12;
    cout << isthere(a, n, r) << endl;

    return 0;
}
