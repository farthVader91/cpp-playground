#include <iostream>
#include <stack>

using namespace std;

void swapStacks(stack<int> s1, stack<int> &s2) {
	while(s1.size() > 0) {
		s2.push(s1.top());
		s1.pop();
	}
}

int main() {
	stack<int> s1, s2;
	for(int i = 0; i < 5; ++i)
		s1.push(i);
	// cout << "S1: " << endl;
	// while(s1.size() > 0) {
		// cout << s1.top() << endl;
		// s1.pop();
	// }
	swapStacks(s1, s2);
	cout << "S2: " << endl;
	while(s2.size() > 0) {
		cout << s2.top() << endl;
		s2.pop();
	}	
	return 0;
}