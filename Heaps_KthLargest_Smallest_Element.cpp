#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int l, int r)
{
	int f = arr[r] ;
	int i = l;

	for (int j = l; j <= r - 1; j++) {
		if (arr[j] <= f) {
			swap(arr[i], arr[j]) ;
			i++;
		}
	}
	swap(arr[i], arr[r]);
	return i;
}


int kth_Smallest_Element(vector<int>&arr, int l, int r, int k)
{
	if (k <= r - l + 1 && k > 0) {

		int ind = partition(arr, l, r);


		if (ind - l == k - 1) {
			return arr[ind];
		}
		if (ind - l > k - 1) {
			return kth_Smallest_Element(arr, l, ind - 1, k);
		}


		return kth_Smallest_Element(arr, ind + 1, r, k - ind + l - 1);
	}
	return INT_MAX;
}

int main()
{

	vector<int>arr ;
	arr.push_back(12) ;
	arr.push_back(3)  ;
	arr.push_back(5) ;
	arr.push_back(7)  ;
	arr.push_back(4) ;
	arr.push_back(19)  ;
	arr.push_back(26) ;

	int n = arr.size(), k = 1;
	cout << "Kth smallest element is " << kth_Smallest_Element(arr, 0, n - 1, k);
	return 0;
}

// #include <bits/stdc++.h>
// using namespace std ;

// int partition(vector<int>& arr, int left, int right) {
//     int pivot = arr[left] ;
//     int l = left + 1 ;
//     int r = right;
//     while (l <= r) {
//         if (arr[l] < pivot && arr[r] > pivot) {
//             swap(arr[l], arr[r]);
//             l++ ;
//             r-- ;
//         }
//         if (arr[l] >= pivot) {
//             l++;
//         }
//         if (arr[r] <= pivot) {
//             r--;
//         }
//     }
//     swap(arr[left], arr[r]);
//     return r;
// }

// int kth_Largest_Element(vector<int>& arr, int k) {
//     int left = 0, right = arr.size() - 1, kth;
//     while (1) {
//         int idx = partition(arr, left, right);
//         if (idx == k - 1) {
//             kth = arr[idx];
//             break;
//         }
//         if (idx < k - 1) {
//             left = idx + 1;
//         } else {
//             right = idx - 1;
//         }
//     }
//     return kth;
// }



// int main() {

//     vector<int>arr ;
//     arr.push_back(12) ;
//     arr.push_back(3)  ;
//     arr.push_back(5) ;
//     arr.push_back(7)  ;
//     arr.push_back(4) ;
//     arr.push_back(19)  ;
//     arr.push_back(26) ;

//     int n = arr.size(), k = 1;
//     cout << "Kth Largest element is " << kth_Largest_Element(arr, k);
//     return 0 ;
// }
