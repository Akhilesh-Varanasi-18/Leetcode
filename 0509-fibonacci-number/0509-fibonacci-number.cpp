class Solution {
public:
int fibvalue(int n,vector<int> &data){
    if(n<=1)return n;
    if(data[n]!=-1)return data[n];
    int left = fibvalue(n-1,data);
    int right=fibvalue(n-2,data);
    data[n]=left+right;
    return left+right;

}
    int fib(int n) {
        vector<int>data(n+1,-1);
        return fibvalue(n,data);
    }
};