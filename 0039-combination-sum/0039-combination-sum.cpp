class Solution {
public:
    void generate(vector<int>& nums, int target,vector<vector<int>>&result,vector<int>&ans,int i,int n){
               
              // if(i==n)return ;
               if (target==0) {
                result.push_back(ans);
                return;
                }
               if(target<0||i==n)return ;
               for(int j = i; j<n;j++){
                if(nums[j]<=target){
                    ans.push_back(nums[j]);
                    generate(nums,target-nums[j],result,ans,j,n);
                    ans.pop_back();
                }
               }

 }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>ans;
        generate(candidates,target,result,ans,0,candidates.size());
        return result;
    }
};