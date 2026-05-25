class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==3 or n==1)return true;
        if(n==2 or n<=0 or n%3 != 0)return false;
        return isPowerOfThree(n/3);
    }
};