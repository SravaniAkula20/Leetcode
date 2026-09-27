class Solution {
public:
    int first(vector<int>&nums, int target){
        int l = 0,r= nums.size()-1;
        int ans = -1;
        while(l<=r){
            int mid = (r+l)/2;
            if(nums[mid] == target){
                ans = mid;
                r = mid-1;
            }
            else if(nums[mid]>target){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
    int last(vector<int>&nums, int target){
        int l = 0,r= nums.size()-1;
        int ans =-1;
        while(l<=r){
            int mid = (r+l)/2;
            if(nums[mid]==target){
                ans =mid;
                l = mid+1;
            }
            else if(nums[mid]<=target){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int f = first(nums,target);
        int l = last(nums,target);
        return {f,l};
    }
};