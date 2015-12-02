class Solution {
public:
    int last[300];
    int lengthOfLongestSubstring(string s) {
        int i=0,j;
        int len=s.length(),ans=1;
        if(len<=1) return len;
        memset(last,-1,sizeof(last));
        last[s[0]]=0;
        for(j=1;j<=len-1;j++)
        {
            if(last[s[j]]<i)
            {
                if(j-i+1>ans) ans=j-i+1;
                last[s[j]]=j;continue;
            }
            i=last[s[j]]+1;
            last[s[j]]=j;
            if(j-i+1>ans) ans=j-i+1;
        }
        return ans;
    }
};
