bool dp[1010][1010];
char* longestPalindrome(char* s) {
    int i,j;
    int len=strlen(s);
    if(len<=1) return s;
    for(i=0;i<=len-1;i++)
        for(j=0;j<=len-1;j++)
        {
            if(i==j) dp[i][j]=1;
            else if((j-i==1) && (s[i]==s[j])) dp[i][j]=1;
            else dp[i][j]=0;
        }
    for(i=3;i<=len;i++)
        for(j=0;j<=len-i;j++)
        {
            if((s[j]==s[j+i-1]) && dp[j+1][j+i-2]) dp[j][j+i-1]=1;
            else dp[j][j+i-1]=0;
        }
    int ansi=0,ansj=0,ans=-1;
    for(i=len;i>=2;i--)
    {
        for(j=0;j<=len-i;j++)
        {
            if(dp[j][j+i-1])
            {
                ans=i;
                ansi=j;ansj=j+i-1;
                break;
            }
        }
        if(ans>-1) break;
    }
    s[ansj+1]=0;
    return s+ansi;
}
