class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>freq(10,0),freq2(10,0);
        for(auto i : digits){
            freq[i]++;
            freq2[i]++;
        }
        int res=0;
        for(int i = 100; i<1000; i+=2){
            int n=i, c=0;
            while(n>0){
                int l =n%10;
                if(freq[l]>0){
                    c++;
                    freq[l]--;
                }
                n/=10;
            }
            if(c==3)res++;
            freq=freq2;
        }
        return res;
    }
};