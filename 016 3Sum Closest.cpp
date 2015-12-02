class Solution {
    int inf;
public:
    int twosum(vector<int>& nums,int cur,int index,int need)
    {
        int i=index+1,j=nums.size()-1;
        int ans=inf;
        while(i<j)
        {
            int tmp=nums[i]+nums[j];
            if(tmp>need)
            {
                if(abs(tmp-need)<abs(ans-need)) ans=tmp;
                j--;
            }
            else if(tmp<=need)
            {
                if(abs(tmp-need)<abs(ans-need)) ans=tmp;
                i++;
            }
        }
        return ans;
    }
    int threeSumClosest(vector<int>& nums, int target) {
        int i,j;
        inf=0x3f3f3f3f;
        sort(nums.begin(),nums.end());
        int ans=inf;
        for(i=0;i<=nums.size()-3;i++)
        {
            if(i && nums[i]==nums[i-1]) continue;
            int ret=twosum(nums,nums[i],i,target-nums[i]);
            if(abs(ret+nums[i]-target)<abs(ans-target)) ans=ret+nums[i];
        }
        return ans;
    }
};
