class Solution {
public:
    void possible(vector<vector<int>>&result,vector<int>&ans,vector<int>&candidates,int target,int i,int sum){
        if(sum==target){
            result.push_back(ans);
            return ;
        }
        if(i>=candidates.size())return;
        if(sum+candidates[i] <= target){
            ans.push_back(candidates[i]);
            possible(result,ans,candidates,target,i,sum+candidates[i]);
            ans.pop_back();
        }
        possible(result,ans,candidates,target,i+1,sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>ans;
        possible(result,ans,candidates,target,0,0);
        return result;
    }
};