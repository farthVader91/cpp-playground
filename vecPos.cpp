#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int myints[] = {8, 4, 2, 3, 11};
	std::vector<int> v(myints, myints+5);
	auto it = find(v.begin(), v.end(), 9);
	if(it != v.end())
		cout << "Element found in vector: " << *it << endl;
	else
		cout << "Element not found in vector" << endl;
	// sort the vector
	sort(v.begin(), v.end(), greater<int>());
	for(auto it2 = v.begin(); it2 != v.end(); ++it2) {
		cout << *it2 << endl;
	}
	return 0;
}