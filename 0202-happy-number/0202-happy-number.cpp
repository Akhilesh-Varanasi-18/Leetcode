class Solution {
public:
int s=0;
    bool isHappy(int n) {
        if(s<10 && s>0){
            if(s==1 || s==7)return true;
            return false;
        }
        s=0;
        while(n>0){
            int l=n%10;
            s+=l*l;
            n=n/10;
        }
        return isHappy(s);
    }
};