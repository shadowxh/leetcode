int uniquePaths(int m, int n) {
    int i,j;
    int dp[110][110];
    dp[1][1]=1;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
        {
            if(i+j==2) continue;
            dp[i][j]=0;
            if(i!=1) dp[i][j]+=dp[i-1][j];
            if(j!=1) dp[i][j]+=dp[i][j-1];
        }
        return dp[m][n];
}
