class Solution {
public:
    int in[300];
    int lengthOfLongestSubstring(string s) {
        int i=0,j;
        int len=s.length(),ans=1;
        if(len<=1) return len;
        memset(in,-1,sizeof(in));
        for(j=0;j<=len-1;j++)
        {
            if(in[s[j]]==-1)
            {
                if(j-i+1>ans) ans=j-i+1;
                in[s[j]]=j;continue;
            }
            while(i<=in[s[j]]) {in[s[i]]=-1;i++;}
            in[s[j]]=j;
            if(j-i+1>ans) ans=j-i+1;
        }
        return ans;
    }
};
