#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> arr;
	for (int i = 0;i < 5; ++i)
		arr.push_back(i);
	for(auto k: arr)
		cout << k << endl;
	return 0;
}