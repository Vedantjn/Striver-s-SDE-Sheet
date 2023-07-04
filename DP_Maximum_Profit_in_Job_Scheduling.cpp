// Greedy + DP

class Solution {
public:
    int jobScheduling(vector<int>& start, vector<int>& end, vector<int>& p) {
        int n=start.size();
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
            v.push_back({end[i],start[i],p[i]});
        sort(v.begin(),v.end()); 
        vector<int> dp(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
             dp[i]=v[i][2];
            if(i==0)
            {
                ans=max(ans,dp[i]);continue;
            }
            dp[i]=max(dp[i],dp[i-1]);
            int curr=v[i][1];
            for(int j=i-1;j>=0;j--)
            {
                if(v[j][0]<=curr)
                {
                     dp[i]=max(dp[i],dp[j]+v[i][2]);break;
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};

// ===============================================================================================================================================================================

// Greedy + DP + Binary Search
class Solution {
public:
    int jobScheduling(vector<int>& start, vector<int>& end, vector<int>& p) {
        int n=start.size();
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
            v.push_back({end[i],start[i],p[i]});
        sort(v.begin(),v.end());
        vector<int> dp(n,0);
        dp[0]=v[0][2];
        int ans=dp[0];
        for(int i=1;i<n;i++)
        {
            int incl=v[i][2];
            dp[i]=incl;
            int curr=i;
            int l=search(v,curr);
            if(l!=-1) dp[i]+=dp[l];
            dp[i]=max(dp[i],dp[i-1]);
            ans=max(ans,dp[i]);
        }
        return ans;
    }
    int search(vector<vector<int>>& v,int curr)
    {
        int l=0,r=curr-1;
        int ans=-1;
        while(l<=r)
        {
            int mid=(l+r)/2 ;
            if(v[mid][0]<=v[curr][1])
                ans=mid,l=mid+1;
            else r=mid-1;
        }
        return ans;
    }
}; 

// ==============================================================================================================================================================================

// Also done in Greedy section