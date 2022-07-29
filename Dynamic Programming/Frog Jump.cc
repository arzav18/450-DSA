int f(int ind, vector<int> &heights, vector<int> &dp)
{
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int left = f(ind-1, heights, dp) + abs(heights[ind] - heights[ind-1]);
    int right = 1e9;
    if(ind>1)
        right = f(ind-2, heights, dp) + abs(heights[ind]-heights[ind-2]);
    return dp[ind] = min(left, right);
}
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n+1, -1);
    return f(n-1, heights, dp);
    // Write your code here.
}
