#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{
    cout << "-------------------------" << endl;

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    cout << "-------------------------" << endl;
}

int main()
{
    vector<int> v;

    int x;
    cout << "Start inserting the elements: " << endl;

    // storing until EOF : ctrl + Z, ctrl + D (linux, mac)
    while (cin >> x)
    {
        v.push_back(x);
    }

    cout << "Here's the vector : " << endl;
    print(v);

    // sorting vector:

    return 0;
}