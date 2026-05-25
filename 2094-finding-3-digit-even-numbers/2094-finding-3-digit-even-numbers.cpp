class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>freq(10,0);
        vector<int>freq2(10,0);
        vector<int>res;
        for(int i=0;i<digits.size();i++){
            freq[digits[i]]++;
            freq2[digits[i]]++;
        }
        for(int i=100; i<=999;i++){
            int n=i, c=0;
            while(n>0){
                int l = n%10;
                if(freq[l]>0){
                    c++;
                    freq[l]=freq[l]-1;
                }
                n/=10;
            }
            if(c==3 and i%2 == 0)res.push_back(i);
            freq=freq2;
        }
        return res;

    }
};