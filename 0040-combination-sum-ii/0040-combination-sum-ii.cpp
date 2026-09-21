class Solution {
public:
        void generate(vector<int>& nums, int target,vector<vector<int>>&result,vector<int>&ans,int i,int n){
               if(target==0){
                result.push_back(ans);
               }
               if(i==n||target<0)return ;
              for(int j = i; j<n;j++){
                if(i<j&&nums[j]==nums[j-1])continue;
                if(nums[j]<=target){
                    ans.push_back(nums[j]);
                    generate(nums,target-nums[j],result,ans,j+1,n);
                    ans.pop_back();
                }
               }


 }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
                vector<vector<int>>result;
                sort(candidates.begin(),candidates.end());
        vector<int>ans;
        generate(candidates,target,result,ans,0,candidates.size());
        return result;
    }
};