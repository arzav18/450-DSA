class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size();
        vector<vector<int>> after(2, vector<int>(3,0));
        vector<vector<int>> cur(2, vector<int>(3,0));
        for(int ind = n-1; ind>=0; ind--)
        {
            for(int buy=0; buy<=1; buy++)
            {
                for(int cap=1; cap<=2; cap++)
                {
                    if(buy==1)
                    {
                        cur[buy][cap] = max(-prices[ind]+ after[0][cap], 0 + after[1][cap]);
                    }
                    else
                    {
                        cur[buy][cap] = max(prices[ind]+ after[1][cap-1], 0 + after[0][cap]);
                    }
                }
                after = cur;
            }
        }
        return after[1][2];
    }
};


// class Solution {
// public:
//     int maxProfit(vector<int>& prices)
//     {
//         int n = prices.size();
//         int buy1,buy2,profit1,profit2;
//         buy1=buy2 = INT_MAX;
//         profit1=profit2 = 0;
        
//         for(int i=0;i<n;i++)
//         {
//             buy1 = min(buy1, prices[i]);
//             profit1 = max(profit1 , prices[i]-buy1);
//             buy2 = min(buy2 , prices[i]-profit1);
//             profit2 = max(profit2 , prices[i]-buy2);
//         }
//         return profit2; 
        
//     }
// };



// class Solution {
// public:    
//Recursion
    
// int f(int ind, int buy, int cap, vector<int>& prices, int n, vector<vector<vector<int>>> dp)
// {
//     if(ind==n || cap==0) return 0;
//     if(dp[ind][buy][cap]!= -1) return dp[ind][buy][cap];
//     if(buy==1)
//         return max(-prices[ind] + dp[ind+1][0][cap] , 0 + dp[ind+1][1][cap]);
//     else
//     {
//         return dp[ind][buy][cap] = max(prices[ind]+dp[ind+1][1][cap-1], 0 + dp[ind+1][0][cap]);
//     }
// }

//     int maxProfit(vector<int>& prices) 
//     {
//         int n = prices.size();
//         vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
//         return dp[0][1][2];
        
//     }
// };




// class Solution {
// public:
    
// //Recursion
    
// int f(int ind, int buy, int cap, vector<int>& prices, int n)
// {
//     if(ind==n || cap==0) return 0;
//     if(buy==1)
//         return max(-prices[ind] + f(ind+1, 0, cap, prices, n) , 0 + f(ind+1, 1, cap, prices, n));
//     else
//     {
//         return max(prices[ind] + f(ind+1, 1, cap-1, prices, n), 0 + f(ind+1, 0, cap, prices, n));
//     }
// }

//     int maxProfit(vector<int>& prices) 
//     {
//         int n = prices.size();
//         return f(0,1,2,prices,n);
        
//     }
// };

