class Solution {
public:
    int minDistance(string word1, string word2) {
        /* dp formulation
         *
         * dp[i][j] shall represent the minimum number of edits
         * required to get word1[:i] to match word2[:j].
         *
         * propagation:
         * if word1[i-1] == word2[j-1] then no extra edits are necessary,
         *     then dp[i][j] = dp[i-1][j-1]
         *
         * otherwise,
         * dp[i][j] = min(dp[i-1][j-1] + 1 // replacement
         *               ,dp[i][j-1] + 1 // insertion
         *               ,dp[i-1][j] + 1 // deletion
         *               )
         */
        int m = word1.size(); int n = word2.size();
        
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (i == 0)
                {
                    dp[i][j] = j;
                }
                else if (j == 0)
                {
                    dp[i][j] = i;
                }
                else
                {
                    if (word1[i-1] == word2[j-1])
                    {
                        dp[i][j] = dp[i-1][j-1];
                    }
                    else
                    {
                        dp[i][j] = min(dp[i-1][j-1] + 1 // replacement
                                      ,min(dp[i][j-1] + 1 // insertion
                                          ,dp[i-1][j] + 1 // deletion
                                          )
                                      );
                    }
                }
            }
        }
        
        return dp.back().back();
    }
};
