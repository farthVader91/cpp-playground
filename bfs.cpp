#include <iostream>
using namespace std;

int main() {
	int i = 1;
	int &ri = i;
	int* p;
	p = &i;
	int** pp;
	pp = &p;
	std::cout << p << ' ' << pp << ' ' << *pp  << ' ' << **pp << endl;
	return 0;
}
