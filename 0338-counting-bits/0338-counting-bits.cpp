class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>res;
       for(int i=0;i<=n;i++){
        int s=0;
        int n=i;
        while(n!=0){
            s+=n%2;
            n/=2;
        }
        res.push_back(s);
       }
       return res; 
    }
};