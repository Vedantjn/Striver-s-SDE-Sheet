void countDistinctInK(vector<int> arr, int k) {
  unordered_map<int, int> map;
  // Handling the 1st K elements
  for (int i = 0; i < k; i++)
    map[arr[i]] = map[arr[i]] + 1;
  cout << map.size() << " ";
  for (int i = k; i < arr.size(); i++) {
    // removing the (i-k)th element
    if (map[arr[i - k]] == 1)
      map.erase(arr[i - k]);
    else
      map[arr[i - k]] = map[arr[i - k]] - 1;
    // Adding the nxt value in map
    map[arr[i]] = map[arr[i]] + 1;
    cout << map.size() << " ";
  }
  cout << endl;
}