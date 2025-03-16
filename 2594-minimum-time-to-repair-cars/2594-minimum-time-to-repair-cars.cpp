class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long l=0,h=1e11;
        while(l<=h){
            long long m=l+(h-l)/2;
            long long n = 0;
            for(long long i=0;i<ranks.size();i++){
                n +=sqrtl(m/ranks[i]);
            }
            if(n>=cars)h=m-1;
            else l=m+1;
        }
        return l;
    }
};