int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridRowSize, int obstacleGridColSize) {
    int m=obstacleGridRowSize;
    int n=obstacleGridColSize;
    int i,j;
    int dp[110][110];
    dp[0][0]=!obstacleGrid[0][0];
    for(i=0;i<=m-1;i++)
        for(j=0;j<=n-1;j++)
        {
            if(!(i+j)) continue;
            dp[i][j]=0;
            if(obstacleGrid[i][j]) continue;
            if(i && !obstacleGrid[i-1][j]) dp[i][j]+=dp[i-1][j];
            if(j && !obstacleGrid[i][j-1]) dp[i][j]+=dp[i][j-1];
        }
        return dp[m-1][n-1];
}
