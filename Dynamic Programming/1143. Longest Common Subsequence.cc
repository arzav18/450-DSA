//Memoization

class Solution {
public:
    int f(int i, int j, string &text1, string &text2, vector<vector<int>> &dp)
    {
        if(i<0 || j<0) return 0;
        if(dp[i][j]!= -1) return dp[i][j];
        if(text1[i] == text2[j])
            return 1 + f(i-1, j-1, text1, text2, dp);
        return dp[i][j] = max(f(i-1, j, text1, text2, dp), f(i, j-1, text1, text2, dp));
            
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return f(n-1, m-1, text1, text2, dp);
    }
};



//Tabulation & space optimisation not working

// class Solution {
// public:

//     int longestCommonSubsequence(string text1, string text2) 
//     {
//         int n = text1.size();
//         int m = text2.size();
//         vector<int> prev(m+1, 0), cur(m+1, 0);
//         for(int j=0; j<=m; j++) return prev[j]=0;
//         for(int i=1; i<=n; i++)
//         {
//             for(int j=1; j<=m; j++)
//             {
//                 if(text1[i-1] == text2[j-1])
//                     cur[j] = 1 + prev[j-1];
//                 else
//                     cur[j] = max(prev[j], cur[j-1]);
//             }
//             prev = cur;
//         }
//         return prev[m];
//     }
// };
//












