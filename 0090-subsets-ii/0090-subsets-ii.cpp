class Solution {
public:
    void generate(vector<int>&nums,vector<vector<int>>&result,vector<int>&ans,int n,int i){
        //if(ans.size()==n){
            result.push_back(ans);
          //  return ;
        //}
        for(int j = i;j<n;j++){
            if(i<j&&nums[j]==nums[j-1])continue;
            ans.push_back(nums[j]);
            generate(nums,result,ans,n,j+1);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        vector<int>ans;
        generate(nums,result,ans,nums.size(),0);
        return result;
    }
};