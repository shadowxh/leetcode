class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        map<int,int> index;
        vector<int> ans;
        if(!ans.empty()) ans.clear();
        if(!index.empty()) index.clear();
        for(i=0;i<=nums.size()-1;i++)
        {
            if(index.find(target-nums[i])==index.end()) {index[nums[i]]=i+1;continue;}
            ans.push_back(i+1);ans.push_back(index[target-nums[i]]);
            if(ans[0]>ans[1]) ans[0]^=ans[1],ans[1]^=ans[0],ans[0]^=ans[1];
            return ans;
        }
    }
};
