class Solution {
public:
    int findWays(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int>prev(k+1,0), cur(k+1,0);
        if(nums[0]==0) prev[0]=2;
        else prev[0]=1;
        if(nums[0]!= 0 && nums[0]<=k) prev[nums[0]] = 1;
        for(int ind = 1; ind<n; ind++)
        {
            for(int sum=0; sum<=k; sum++)
            {
                int notTake = 0+ prev[sum];
                int take = 0;
                if(nums[ind]<=sum)
                    take = prev[sum-nums[ind]];
                cur[sum]  = notTake + take;
            }
            prev = cur;
        }
        return prev[k];
    }
    
    int countPartitions(int n, int d, vector<int> &arr)
    {
        int totSum = 0 ;
        for(auto & it: arr) totSum +=it;
        if(totSum-d<0 || (totSum-d)%2) return false;
        return findWays(arr, (totSum-d)/2);
    }
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        int n = nums.size();
        return countPartitions(n, target, nums);
    }
};
