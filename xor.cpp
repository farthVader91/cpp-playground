#include <iostream>

using namespace std;

int main() {
	int i = 5;
	cout << 5 << endl;
	cout << "After shifting left by 2 positions: ";
	i = i << 2;
	cout << i << endl;
	cout << "XOR'd with '01010' " << (i ^ 10) << endl;
	return 0;
}