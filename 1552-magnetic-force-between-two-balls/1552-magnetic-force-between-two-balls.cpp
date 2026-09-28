class Solution {
public:
    bool force(vector<int>&position,int mid,int m){
        int cnt = 1;
        int lastpos = position[0];
        for(int i = 1;i<position.size();i++){
            if(position[i]-lastpos >=mid){
                cnt++;
                lastpos = position[i];
                if(cnt==m)return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low = 1;
        int high = position.back()-position.front();
         int ans =1;
        while(low<=high){
            int mid = (low+high)/2;
           
            if(force(position,mid,m)){
                 ans = mid;
                 low=mid+1; 
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};