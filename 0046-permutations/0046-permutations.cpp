class Solution {
public:
    void valid(vector<vector<int>>&res,vector<int>&ans,vector<bool>&vis,vector<int>&nums){
        if(ans.size()==nums.size()){
            res.push_back(ans);
        }
        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
                vis[i]=1;
                ans.push_back(nums[i]);
                valid(res,ans,vis,nums);
                ans.pop_back();
                vis[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ans;
        vector<bool>vis(nums.size(),0);
        valid(res,ans,vis,nums);
        return res;
    }
};