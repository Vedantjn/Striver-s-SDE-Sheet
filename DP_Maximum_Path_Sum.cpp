// Space optimisation

#include <bits/stdc++.h>

using namespace std;

int minSumPath(int n, int m, vector<vector<int> > &matrix){
      vector<int> prev(m,0);
    for(int i=0; i<n ; i++){
        vector<int> temp(m,0);
        for(int j=0; j<m; j++){
            if(i==0 && j==0) temp[j] = matrix[i][j];
            else{
                
                int up = matrix[i][j];
                if(i>0) up += prev[j];
                else up += 1e9;
                
                int left = matrix[i][j];
                if(j>0) left+=temp[j-1];
                else left += 1e9;
                
                temp[j] = min(up,left);
            }
        }
        prev=temp;
    }
    
    return prev[m-1];
    
}

int main() {

  vector<vector<int> > matrix{{5,9,6},
                            {11,5,2}};
                            
  int n = matrix.size();
  int m = matrix[0].size();
  
  cout<<minSumPath(n,m,matrix);
}


// ========================================================================================================================================================================

// Tabulation

// #include <bits/stdc++.h>

// using namespace std;

// int minSumPath(int n, int m, vector<vector<int> > &matrix){
//     vector<vector<int> > dp(n,vector<int>(m,0));
//     for(int i=0; i<n ; i++){
//         for(int j=0; j<m; j++){
//             if(i==0 && j==0) dp[i][j] = matrix[i][j];
//             else{
                
//                 int up = matrix[i][j];
//                 if(i>0) up += dp[i-1][j];
//                 else up += 1e9;
                
//                 int left = matrix[i][j];
//                 if(j>0) left+=dp[i][j-1];
//                 else left += 1e9;
                
//                 dp[i][j] = min(up,left);
//             }
//         }
//     }
    
//     return dp[n-1][m-1];
    
// }

// int main() {

//   vector<vector<int> > matrix{{5,9,6},
//                             {11,5,2}};
                            
//   int n = matrix.size();
//   int m = matrix[0].size();
  
//   cout<<minSumPath(n,m,matrix);
// }


// ========================================================================================================================================================================

// Memoisation

// #include <bits/stdc++.h>

// using namespace std;

// int minSumPathUtil(int i, int j,vector<vector<int>> &matrix,vector<vector<int>> &dp)
// {
//   if(i==0 && j == 0)
//     return matrix[0][0];
//   if(i<0 || j<0)
//     return 1e9;
//   if(dp[i][j]!=-1) return dp[i][j];
    
//   int up = matrix[i][j]+minSumPathUtil(i-1,j,matrix,dp);
//   int left = matrix[i][j]+minSumPathUtil(i,j-1,matrix,dp);
  
//   return dp[i][j] = min(up,left);
  
// }

// int minSumPath(int n, int m, vector<vector<int> > &matrix){
//     vector<vector<int> > dp(n,vector<int>(m,-1));
//     return minSumPathUtil(n-1,m-1,matrix,dp);
    
// }

// int main() {

//   vector<vector<int> > matrix{{5,9,6},
//                             {11,5,2}};
                            
//   int n = matrix.size();
//   int m = matrix[0].size();
  
//   cout<<minSumPath(n,m,matrix);
// }

// ========================================================================================================================================================================

// Recursion

// itn f(int i, int j, vector<vector<int>>&grid){
//     if(i == 0 && j == 0) return grid[0][0];
//     if(i < 0 || j < 0) return 1e9;

//     int up = grid[i][j] + f(i-1, j, grid);
//     int left = grid[i][j] + f(i, j-1, grid);

//     return min(up, left);
// }

// int minPath(vector<vector<int>>&grid){
//     int n = grid.size();
//     int m = grid[0].size();
//     return f(n-1, m-1, grid);
// }