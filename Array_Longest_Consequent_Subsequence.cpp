#include<bits/stdc++.h>

using namespace std;
int longestConsecutive(vector < int > & nums) {
  set < int > hashSet;
  for (int num: nums) {
    hashSet.insert(num);
  }

  int longestStreak = 0;

  for (int num: nums) {
    if (hashSet.find(num - 1) == hashSet.end()) {
      int currentNum = num;
      int currentStreak = 1;

      while (hashSet.find(currentNum + 1) != hashSet.end()) {
        currentNum += 1;
        currentStreak += 1;
      }

      longestStreak = max(longestStreak, currentStreak);
    }
  }

  return longestStreak;
}
int main() {
  vector<int> arr{100,200,1,2,3,4};
  int lon = longestConsecutive(arr);
  cout << "The longest consecutive sequence is " << lon << endl;

}