#include <bits/stdc++.h>
using namespace std;

int main()
{
	priority_queue<int> pq;
	pq.push(10);
	pq.push(30);
	pq.push(90);
	pq.push(20);
	

	cout << pq.top() << endl;
    
    pq.pop();
    cout << pq.top() << endl;
	
    cout << "Here's the pq" << endl;
    while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}


	return 0;
}
