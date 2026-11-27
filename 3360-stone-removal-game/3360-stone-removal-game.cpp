class Solution {
public:
    bool canAliceWin(int n) {
        int p = 10;
        int t = 0;
        while(n >= p){
            t++;
            n -= p;
            p--;
        }
        if(t%2)return true;
        else return false;
        
    }
};