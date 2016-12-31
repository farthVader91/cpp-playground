#include <iostream>
#include <vector>

using namespace std;

int main() {
	std::vector<int> v;
	for(int i = 0; i < 10; ++i) {
		v.push_back(i);
	}
	// sort(v.begin(), v.end());
	
	for(int i = 0; i < 10; ++i) {
		int numSwaps = 0;
		for(int j = 0; j < 9; ++j) {
			if(v[j] < v[j + 1]) {
				swap(v[j], v[j + 1]);
				numSwaps++;
			}
		}
		if (!numSwaps)
			break;
	}
	

	for(auto it = v.begin(); it != v.end(); ++it)
		cout << *it << endl;
	return 0;
}