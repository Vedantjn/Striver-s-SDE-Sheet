// Tabulation

int mcm(vector<int>&arr, int N){
    int dp[N][N];

    for(int i = 1; i < N; i++)
        dp[i][i] = 0;

    for(int i = N-1; i >= 1; i--){
        for(int j = i+1; j < N; j++){
            int mini = INT_MIN;

            int steps = arr[i-1]*arr[k]*arr[j] + dp[i][k] + dp[k+1][j];

            mini = min(steps, mini);
        }
        dp[i][j] = mini;
    }
    
    return dp[1][N-1];
}

// =============================================================================================================================================================================
// Memoisation

//  #include <bits/stdc++.h>
// using namespace std;

// int f(vector<int>& arr, int i, int j, vector<vector<int>>& dp){
    
//     // base condition
//     if(i == j)
//         return 0;
        
//     if(dp[i][j]!=-1)
//         return dp[i][j];
    
//     int mini = INT_MAX;
    
//     // partioning loop
//     for(int k = i; k<= j-1; k++){
        
//         int ans = f(arr,i,k,dp) + f(arr, k+1,j,dp) + arr[i-1]*arr[k]*arr[j];
        
//         mini = min(mini,ans);
        
//     }
    
//     return mini;
// }


// int matrixMultiplication(vector<int>& arr, int N){
    
//     vector<vector<int>> dp(N,vector<int>(N,-1));
    
//     int i =1;
//     int j = N-1;
    
    
//     return f(arr,i,j,dp);
    
    
// }

// int main() {
	
// 	vector<int> arr = {10, 20, 30, 40, 50};
	
// 	int n = arr.size();
	
// 	cout<<"The minimum number of operations is "<<matrixMultiplication(arr,n);
	
// 	return 0;
// }


// =============================================================================================================================================================================
// Recursion

// #include <bits/stdc++.h>
// using namespace std;

// int f(vector<int>& arr, int i, int j){
    
//     // base condition
//     if(i == j)
//         return 0;
        
//     int mini = INT_MAX;
    
//     // partioning loop
//     for(int k = i; k<= j-1; k++){
        
//         int ans = f(arr,i,k) + f(arr, k+1,j) + arr[i-1]*arr[k]*arr[j];
        
//         mini = min(mini,ans);
        
//     }
    
//     return mini;
// }


// int matrixMultiplication(vector<int>& arr, int N){
    
//     int i =1;
//     int j = N-1;
    
    
//     return f(arr,i,j);
    
    
// }

// int main() {
	
// 	vector<int> arr = {10, 20, 30, 40, 50};
	
// 	int n = arr.size();
	
// 	cout<<"The minimum number of operations is "<<matrixMultiplication(arr,n);
	
// 	return 0;
// }