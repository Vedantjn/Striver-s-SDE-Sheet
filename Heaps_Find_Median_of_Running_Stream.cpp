In the optimal approach, we can use two heaps, one max heap, and a min-heap. One heap will store the larger half of the array, and the other heap will store the smaller half of the array in descending order. When the current length is even, we take the top elements of both the heaps and take their average. Else, we return the top of the appropriate heap as the median. It can also be solved in an easier way in C++ using ordered_set data structure. Refer Implementation for better understanding.

Analysis
Time Complexity: addNum() -> O(logn), getMedian() -> O(logn).
Space Complexity: addNum() -> O(n), getMedian() -> O(n).
Implementation
C++
class MedianCalculator {
public:
    /** initialize your data structure here. */
	priority_queue<int> large;
	priority_queue<int, vector<int>, greater<int>> small;
    MedianCalculator() {
		while(!large.empty()) {
			large.pop();
		}
		while(!small.empty()) {
			small.pop();
		}
    }
    
    void addNum(int num) {
		large.push(num);
        small.push(large.top());
		large.pop();
        if(large.size() < small.size()) {
            large.push(small.top());
			small.pop();
        }
    }
    
    float getMedian() {
		return large.size() > small.size() ? large.top() : (large.top() + small.top()) / 2.0f;
    }
};