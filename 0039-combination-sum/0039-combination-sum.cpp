class Solution {
public:
    void generate(vector<int>& nums, int target,vector<vector<int>>&result,vector<int>&ans,int i,int n){
               if(i==n&&target==0){
                result.push_back(ans);
               }
               if(i==n)return ;
               if(nums[i]<=target){
                ans.push_back(nums[i]);
                generate(nums,target-nums[i],result,ans,i,n);
                ans.pop_back();
               }
            generate(nums,target,result,ans,i+1,n);

 }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>ans;
        generate(candidates,target,result,ans,0,candidates.size());
        return result;
    }
};