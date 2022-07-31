class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.size() ;
        int m = str2.size() ;
        string ans  = "" ;
        int dp[n+1][m+1] ;
        
        for(int i = 0 ; i <= n ; i++)
        {
            for(int j=0 ; j <= m ; j++)
            {  
            if(i==0 or j==0) dp[i][j] = 0 ;
             else{
                 if(str1[i-1]==str2[j-1]) dp[i][j] = 1 + dp[i-1][j-1] ;
                else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]) ;
             }
            
            }
        }
        
      
        int i = n , j = m ;
        
        while(i>0 and j > 0)
        {
            if(str1[i-1] == str2[j-1])
            {
                ans = str1[i-1]+ans ;
                i-- ;
                j-- ;
                
            }
            
                else if(dp[i-1][j] > dp[i][j-1])
                {
                   ans=str1[i-1]+ans;
                    i-- ;
                    
                }
                else{
                    ans=str2[j-1]+ans; 
                    j-- ;
                }
            
        }
        
        while(i>0)
        {
            ans = str1[i-1]+ans ;
                    i-- ;
        }
        while(j>0)
        {
              ans  = str2[j-1]+ans ;
                    j-- ;
            
        }
     
        return ans ;
    }
};
//
//
