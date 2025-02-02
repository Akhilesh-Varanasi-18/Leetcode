
class Solution {
public:
const int MOD = 1000000007;
int be(long long x,long long b){
    long long ans=1;
    // if(x==0||x==1) return b;
    // if(x<0)x=-1*x;
    while(x){
        if(x%2) ans=ans*b%MOD;
        b=b*b%MOD;
        x=x/2;
    }
    return ans;
}
    int countGoodNumbers(long long n) {
        long long nEven = (n+1)/2;
        long long nOdd = n/2;
        long long Ev = be(nEven,5);
        long long Od = be(nOdd,4);
        return ((Ev)*(Od))%MOD;
    }
};