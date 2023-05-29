#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    vector<int>arr{0,0,0,1,2,1,0,1,2,2,1,1};
    int n = 12;

    sortArray(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " " << endl;
    }
}