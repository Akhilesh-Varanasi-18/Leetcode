class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 2 or n==1)return true;
        if(n%2 != 0 or n<= 0)return false;
        return isPowerOfTwo(n/2);
    }
};