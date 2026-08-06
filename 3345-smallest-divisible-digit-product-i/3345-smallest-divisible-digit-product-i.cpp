class Solution {
public:
    int pro(int n){
        int p = 1;
        while(n != 0){
            p = p*(n%10);
            n /= 10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        for(int i = n; i<=100 ; i++){
            if((pro(i) % t == 0))return i;
        }
        return -1;
    }
};