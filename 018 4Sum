class Solution {
public:
    vector< vector<int> > fourSum(vector<int>& nums, int target) {
        int i,j;
        vector< vector<int> > ans;
        vector<int> anstmp;
        int n=nums.size();
        if(n<4) return ans;
        sort(nums.begin(),nums.end());
        for(i=0;i<=n-4;i++)
        {
            if(i && (nums[i]==nums[i-1])) continue;
            for(j=i+1;j<=n-3;j++)
            {
                if(j>i+1 && (nums[j]==nums[j-1])) continue;
                int x=j+1,y=n-1;
                while(x<y)
                {

                    int tmp=nums[x]+nums[y];
                    if(tmp>target-nums[i]-nums[j]) y--;
                    else if(tmp<target-nums[i]-nums[j]) x++;
                    else
                    {
                        if(!anstmp.empty()) anstmp.clear();
                        anstmp.push_back(nums[i]);anstmp.push_back(nums[j]);anstmp.push_back(nums[x]);anstmp.push_back(nums[y]);
                        ans.push_back(anstmp);
                        x++;y--;
                    }
                    while(x<y && x>j+1 && (nums[x]==nums[x-1])) x++;
                    while(x<y && y<n-1 && (nums[y]==nums[y+1])) y--;
                }
            }
        }
        return ans;
    }
};
