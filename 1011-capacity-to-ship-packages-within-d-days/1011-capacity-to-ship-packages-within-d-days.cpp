class Solution {
public:
    long long sum(vector<int>weights,long long mid){
        int days=1;
        int cap=0;
        for(int i:weights){
            if(cap+i<=mid){
               // days++;
                cap+=i;
            }
            else{
                days++;
                cap=i;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long low=*max_element(weights.begin(),weights.end());
        long long high =accumulate(weights.begin(),weights.end(),0);
        long long ans=high;
        while(low<=high){
            long long mid =low+(high-low)/2;;
            long long d= sum(weights,mid);
            if(d<=days){
                ans=mid;
                high =mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};