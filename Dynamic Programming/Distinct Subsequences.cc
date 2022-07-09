class Solution{
public:    

int numDistinct(string a, string b) {
        int n=a.size(),m=b.size();
        vector<double>dp(m+1,0);
        dp[0]=1;
        for(int i=1;i<n+1;i++)
            {for(int j=m;j>0;j--)
               {if(a[i-1]==b[j-1])
                    {dp[j] =dp[j-1]+dp[j];
                    }
				}
            }
    return (int)dp[m];  
    }
};
