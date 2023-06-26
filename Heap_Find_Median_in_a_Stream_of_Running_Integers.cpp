class FindMedian{
public:
    priority_queue<int>large;
    priority_queue<int, vector<int>, greater<int>> small;

    void findMedian(){
        while(!large.empty()){
            large.pop();
        }
        while(!small.empty()){
            small.pop();
        }
    }

    void addNum(int num){
        large.push(num);
        small.push(large.top());
        large.pop();

        if(large.size() < small.size()){
            large.push(small.top());
            small.pop();
        }
    }

    float getMedian(){
        return large.size() > small.size() ? large.top() : (large.top() + small.top())/2.0f;
    }

};