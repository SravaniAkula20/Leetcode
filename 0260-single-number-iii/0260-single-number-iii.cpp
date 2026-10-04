class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long res=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        long long k=0;
        long long x=1;
        while(true){
            if((res&x)>0){
                break;
            }
            k++;
            x=x<<1;
        }
        int res1=0,res2=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]&x)>0){
                res1=res1^nums[i];
            }
            else{
                res2=res2^nums[i];
            }
        }
        vector<int>ans;
        ans.push_back(res1);
        ans.push_back(res2);
        return ans;
    }
};