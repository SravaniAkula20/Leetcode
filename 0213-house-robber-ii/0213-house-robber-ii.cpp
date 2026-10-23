class Solution {
public:
    int find(int start,int end,vector<int>&nums){
        if(start==end)return nums[start];
        vector<int>dp(end+1);
        dp[start]=nums[start];
        dp[start+1]= max(nums[start],nums[start+1]);
        for(int i = start+2;i<=end;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[end];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        return max(find(0,n-2,nums),find(1,n-1,nums));
    }
};