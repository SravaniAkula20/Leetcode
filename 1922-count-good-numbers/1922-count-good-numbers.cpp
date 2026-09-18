class Solution {
public:
    long long mod= 1000000007;
    long long power(long long a,long long b){
        if(b==0)return 1;
        long long half = power(a,b/2);
        half = (half*half)%mod;
        if(b%2==1){
            half = (half*a)%mod;
        }
        return half;
    }
    long long countGoodNumbers(long long n) {
        long long even = power(5,(n+1)/2);
        long long odd = power(4,(n/2));
        return (even*odd)%mod;
    }
};