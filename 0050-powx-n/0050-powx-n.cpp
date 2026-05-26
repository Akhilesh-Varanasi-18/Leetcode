class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1;
        else if(n==1)return x;
        else if(n<0)return 1/x*(pow(x,n+1));
        else return x*pow(x,n-1);
    }
};