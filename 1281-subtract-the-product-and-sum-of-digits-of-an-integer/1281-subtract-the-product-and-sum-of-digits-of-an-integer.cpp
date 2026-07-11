class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = n;
        int pro = 1;
        int su = 0;
        while(p != 0){
            pro *= p%10;
            su += p%10;
            p /= 10;
        }
        return (pro - su);
    }
};