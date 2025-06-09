class Solution {
public:        
    int hammingWeight(int n) {
        if(n<=0)return 0;
       if(n%2)return hammingWeight(n/2)+1;
       return hammingWeight(n/2);
    }
};