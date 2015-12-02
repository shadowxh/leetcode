class Solution {
public:
    int cnt,n;
    vector< vector<int> > ans;
    bool cmp(vector<int>& a,vector<int>& b)
    {
        if((a[0]==b[0]) && (a[1]==b[1]) && (a[2]==b[2])) return 1;
        return 0;
    }
    void twosum(vector<int>& nums,int cur,int index)
    {
        int i=index+1,j=n-1;
        vector<int> tmp;
        while(i<j)
        {
            //printf("%d %d %d\n",cur,nums[i],nums[j]);
            if(nums[i]+nums[j]>-cur) j--;
            else if(nums[i]+nums[j]<-cur) i++;
            else
            {
                if(!tmp.empty()) tmp.clear();
                tmp.push_back(cur);tmp.push_back(nums[i]);tmp.push_back(nums[j]);
                if(cnt && cmp(tmp,ans[cnt-1])) {i++,j--;continue;}
                ans.push_back(tmp);
                cnt++;
                i++;j--;
            }
        }
        return;
    }
    vector< vector<int> > threeSum(vector<int>& nums) {
        int i,j;
        cnt=0;
        if(!ans.empty()) ans.clear();
        n=nums.size();
        if(n<3) return ans;
        sort(nums.begin(),nums.end());
        //for(int p=0;p<nums.size();p++) printf("%d ",nums[p]);printf("\n");
        for(i=0;i<=n-3;i++)
        {
            if(i && nums[i]==nums[i-1]) continue;
            twosum(nums,nums[i],i);
        }
        return ans;
    }
};
