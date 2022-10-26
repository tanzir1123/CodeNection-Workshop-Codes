#include <bits/stdc++.h>
using namespace std;

int main()
{
	queue<int> q;
	
	q.push(21);
	q.push(22);
	q.push(23);
	q.push(24);

	cout << q.front() << endl;

	q.pop();
   // cout << q.size() << endl;
	cout << q.front() << endl;
	
    cout << " Printing all the elements in Queue. " << endl;
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
	return 0;
}
