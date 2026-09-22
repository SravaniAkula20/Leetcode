class Solution {
public:
     void generate(vector<vector<int>>&res,vector<int>&ans,vector<bool>&vis,vector<int>&nums){
        if(ans.size()==nums.size()){
            res.push_back(ans);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]&&!vis[i-1])continue;
            if(!vis[i]){
                vis[i]=1;
                ans.push_back(nums[i]);
                generate(res,ans,vis,nums);
                ans.pop_back();
                vis[i]=0;
            }
        }
     }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>res;
        int n = nums.size();
        vector<bool>vis(n,0);
        vector<int>ans;
        sort(nums.begin(),nums.end());
        generate(res,ans,vis,nums);
        return res;
    }
};