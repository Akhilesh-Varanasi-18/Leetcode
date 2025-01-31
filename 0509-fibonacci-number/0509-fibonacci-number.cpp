class Solution {
public:
int fibvalue(int n){
    if(n<=1)return n;
    return(fibvalue(n-1)+fibvalue(n-2));
}
    int fib(int n) {
        return fibvalue(n);
    }
};