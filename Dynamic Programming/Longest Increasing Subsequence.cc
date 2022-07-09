//Memoised soln:

class Solution {
public:
    int f(int ind, int prev_ind, vector<int> &nums, int n, vector<vector<int>> &dp)
    {
        if(ind==n) return 0;
        if(dp[ind][prev_ind+1]!= -1) return dp[ind][prev_ind +1];
        
        int len = 0 + f(ind+1, prev_ind, nums, n, dp);
        if(prev_ind ==-1 || nums[ind]>nums[prev_ind])
        {
            len = max(len, 1+f(ind+1, ind, nums, n, dp));
        }
        return dp[ind][prev_ind+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) 
    {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int> (n+1, -1));
        return f(0, -1, nums, n, dp);
    }
};

// class Solution {
// public:
//     vector<int> largestDivisibleSubset(vector<int>& nums) 
//     {
//         int n = nums.size();
//         vector<int> dp(n,1), hash(n);
//         int maxi = 1;
//         int lastIndex = 0;
//         for(int i=0; i<n; i++)
//         {
//             hash[i] =i;
//             for(int prev =0; prev<i; prev++)
//             {
//                 if(nums[prev]<nums[i] && 1+dp[prev]>dp[i])
//                 {
//                     dp[i] =1 + dp[prev];
//                 }
//             }
//             if(dp[i]>maxi)
//             {
//                 maxi = dp[i];
//                 lastIndex = i;
//             }
//         }
//         vector<int> temp;
//         temp.push_back(nums[lastIndex]);
//         while(hash[lastIndex] != lastIndex)
//         {
//             lastIndex = hash[lastIndex];
//             temp.push_back(nums[lastIndex]);
//         }
//         reverse(temp.begin(), temp.end());
//         for(auto it: temp) cout<<it<<" ";
//         cout<<endl;
//         return maxi;
//     }
// };
