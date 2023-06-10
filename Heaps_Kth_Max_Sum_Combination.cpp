vector<int>solve(vector<int>&a, vector<int>&b, int n, int k){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    priority_queue<pair<int, pair<int, int>>> maxHeap;
    maxHeap.push_back({a[n-1]+b[n-1], {n-1, n-1}});
    
    set<pair<int, int>> mySet;
    mySet.push_back({n-1, n-1});

    vector<int>result;

    while(k > 0){
        pair<int, <int, int>> top = maxHeap.top();
        maxHeap.pop();

        int sum = top.first;
        int x = top.second.first;
        int y = top.second.second;

        result.push_back(sum);

        if(mySet.find({x-1, y}) == mySet.end()){
            maxHeap.push_back({a[x-1] + b[y], {x-1, y}});
            mySet.insert({x-1, y});
        }

        if(mySet.find({x, y-1}) == mySet.end()){
            maxHeap.push_back({a[x] + b[y-1], {x, y-1}});
            mySet.insert({x, y-1});
        }

        k = k - 1;
    }
    return result;
}