class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long  sum1=0;
        for(int x : nums){
            sum1^=x;
        }
        //int k = 0;
        long long  x = 1;
        // while(sum1>0){
        //     if(sum1&x)break;
        //    // k++;
        //     x=x<<1;
        // }
        while((sum1 & x) == 0){
         x<<= 1;
       }
       // vector<int>num1,num2;
       long long a =0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&x)a^=nums[i];
            else{
                b^=nums[i];
            }
        }
        return {int(a),int(b)};
    }
};