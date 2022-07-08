//Abhinay's code

class Solution{
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
      int n =  grid[0].size();
      int  m = grid.size();
    
         if(n==0|| m==0) return  0;
        int dp[m][n];
         memset(dp,0,sizeof(dp));
        for(int i=0;i<m;i++)
        {   if(grid[i][0]!=1) dp[i][0]=1;
            else break;
        }
        for(int j=0;j<n;j++)
        {   if(grid[0][j]!=1) dp[0][j]=1;
            else break;
        }
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
                if(grid[i][j]!=1)
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
        return dp[m-1][n-1];
    }
};





//Space optiisation

// class Solution{
// public:
//     int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid)
// {
//     int m = obstacleGrid.size();
//     int n = obstacleGrid[0].size();
        
//     vector<int> prev(m,0);
//     for(int i=0; i<n; i++){
//         vector<int> temp(m,0);
//         for(int j=0; j<m; j++){
//             if(i>0 && j>0 && obstacleGrid[i][j]==-1){
//                 temp[j]=0;
//                 continue;
//             }
//             if(i==0 && j==0){
//                 temp[j]=1;
//                 continue;
//             }
            
//             int up=0;
//             int left =0;
            
//             if(i>0)
//                 up = prev[j];
//             if(j>0)
//                 left = temp[j-1];
                
//             temp[j] = up + left;
//         }
//         prev = temp;
//     }
    
//     return prev[n-1];

    
// }

// };



// class Solution {
// public:
//     int f(int i, int j, vector<vector<int>> &obstacleGrid, vector<vector<int>> &dp)
//     {
//         if(i>-0 && j>=0 && obstacleGrid[i][j] == -1) return 0;
//         if(i==0 && j==0) return 1;
//         if(i<0 || j<0) return 0;
//         if(dp[i][j]!= -1) return dp[i][j];
//         int up = f(i-1 , j , obstacleGrid, dp);
//         int left = f(i , j , obstacleGrid, dp); 
//         return dp[i][j] = up + left;
//     }
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
//     {
//         int m = obstacleGrid.size();
//         int n = obstacleGrid[0].size();
//         vector<vector<int>> dp(m, vector<int>(n, -1));
//         return f(m-1, n-1, obstacleGrid, dp);
//     }
// };

// //Tabulation

// class Solution{
// public:
//     int mazeObstaclesUtil(int n, int m, vector<vector<int>> &obstacleGrid,vector<vector<int>> &dp) 
// {
//   for(int i=0; i<n ;i++){
//       for(int j=0; j<m; j++){
          
//           //base conditions
//           if(i>0 && j>0 && obstacleGrid[i][j]==-1){
//             dp[i][j]=0;
//             continue;
//           }
//           if(i==0 && j==0){
//               dp[i][j]=1;
//               continue;
//           }
          
//           int up=0;
//           int left = 0;
          
//           if(i>0) 
//             up = dp[i-1][j];
//           if(j>0)
//             left = dp[i][j-1];
            
//           dp[i][j] = up+left;
//       }
//   }
  
//   return dp[n-1][m-1];

  
// }

// int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
// {
//     int n = obstacleGrid.size();
//     int m = obstacleGrid[0].size();
//     vector<vector<int> > dp(n,vector<int>(m,-1));
//     return mazeObstaclesUtil(n,m,obstacleGrid,dp);
    
// }
// };
