class Solution {
public:
    bool isHappy(int n) {
       if(n==1 or n==7) return true;
       else if(n<10)return false;
       else{
        int s=0;
        while(n>0){
            int res=n%10;
            s+=res*res;
            n/=10;
        }
        return isHappy(s);
       } 
    }
};