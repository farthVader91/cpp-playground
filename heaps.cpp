#include <iostream>
#include <iterator>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
		priority_queue<int> max_heap;
		priority_queue<int, vector<int>, greater<int> > min_heap;
		std::vector<double> medians;
	public:
		void add(int ele) {
			if(min_heap.empty())
				max_heap.push(ele);
			else if(max_heap.empty())
				min_heap.push(ele);
			else {
				if(!medians.empty()) {
					if (ele < medians.back())
						max_heap.push(ele);
					else
						min_heap.push(ele);
				}
			}
		}

		void rebalance() {
			if(max_heap.size() - min_heap.size() == 2) {
				min_heap.push(max_heap.top());
				max_heap.pop();
			}
			else if(min_heap.size() - max_heap.size() == 2) {
				max_heap.push(min_heap.top());
				min_heap.pop();
			}
		}

		std::vector<double> getMedians(std::vector<int> v) {
			for(auto it = v.begin(); it != v.end(); ++it) {
				int ele = *it;
				// add the element into respective heap
				add(ele);
				// rebalance the internal heaps
				rebalance();
				if (max_heap.size() == min_heap.size()) {
					medians.push_back(((double)max_heap.top() + min_heap.top()) / 2);
				} else {
					if (max_heap.size() > min_heap.size())
						medians.push_back((double)max_heap.top());
					else
						medians.push_back((double)min_heap.top());
				}
			}
			return medians;
		}

		void printSizes() {
			cout << "MaxH(size): " << max_heap.size() << " MaxH(top): " << max_heap.top() << endl;
			cout << "MinH(size): " << min_heap.size() << " MinH(top): " << min_heap.top() << endl;
		}
};

int main() {
	Solution s;
	auto result = s.getMedians({9, 3, 5, 2, 7, 1, 10});
	for(auto it = result.begin(); it != result.end(); ++it)
		printf("%.1f\n", *it);
	/*
	printf("%.1f\n", s.getMedian(9));
	printf("%.1f\n", s.getMedian(3));
	printf("%.1f\n", s.getMedian(5));
	printf("%.1f\n", s.getMedian(2));
	printf("%.1f\n", s.getMedian(7));
	printf("%.1f\n", s.getMedian(1));
	printf("%.1f\n", s.getMedian(10));
	printf("%.1f\n", s.getMedian(2));
	*/
	s.printSizes();
	return 0;
}