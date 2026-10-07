class Solution {
public:
    void isvalid(vector<vector<int>>&result,vector<int>&ans,int n,int k,int idx){
        if(ans.size()==k){
            result.push_back(ans);
            return;
        }
        for(int i=idx+1;i<=n;i++){
            ans.push_back(i);
            isvalid(result,ans,n,k,i);
            ans.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>result;
        vector<int>ans;
        isvalid(result,ans,n,k,0);
        return result;
    }
};