#include <iostream>

using namespace std;

class Node {};

int main() {
	Node* arr[10] = { NULL };
	for(int i = 0;i < 10; i++) {
		if(arr[i])
			cout << arr[i] << endl;
	}
	return 0;
}