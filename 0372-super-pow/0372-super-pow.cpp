class Solution {
public:
    const int mod = 1337;
    int pow(int x,int n){
         if(n==0)return 1;
         x%=mod;
         int res = 1;
         for(int i=0;i<n;i++){
            res = (res*x)%mod;
         }
         return res;
    }
    int superPow(int a, vector<int>& b) {
        if (b.empty()) return 1;
        int ld = b.back();
        b.pop_back();
        int x = pow(a,ld);
        int y = pow(superPow(a,b),10);
        return (x*y)%mod;
    }
};