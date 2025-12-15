class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long c=1;
        long long res=1;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]-1==prices[i+1]){
                c+=1;
            }
            else c=1;
            res+=c;
        }
        return res;
    }
};