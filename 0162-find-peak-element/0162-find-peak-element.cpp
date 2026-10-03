class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        long long low = 0,high =nums.size()-1;
       // long long ans  = -1;
        while(low<high){
            long long mid= (low+high)/2;
            if(nums[mid]>nums[mid+1]){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};