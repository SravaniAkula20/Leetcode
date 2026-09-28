class Solution {
public:
    int solve(vector<int>&nums,int i,int n,vector<int>&dp){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1)return dp[i];
        int sub1= nums[i]+solve(nums,i+2,n,dp);
       // int sub2 = INT_MIN;
       // if(i+1<n){
             int sub2 = solve(nums,i+1,n,dp);
        //}
        return dp[i] =  max(sub1,sub2);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(nums,0,nums.size(),dp);
    }
};