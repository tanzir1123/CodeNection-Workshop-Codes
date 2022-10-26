#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> stack;
	
	stack.push(21);
	stack.push(22);
	stack.push(23);
	stack.push(24);

	cout << stack.top() << endl;
    stack.pop();
    
    cout << stack.top() << endl;

    cout << " Printing all the elements. " << endl;
    while(!stack.empty()){
        cout << stack.top() << endl;
        stack.pop();
    }
	return 0;
}
