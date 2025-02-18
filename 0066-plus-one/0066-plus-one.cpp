class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // string num;
        // for(int i=0;i<digits.size();i++){
        //     num+=to_string(digits[i]);
        // }
        // stringstream geek;
        // geek << num;
        // long long x = 0;
        // geek >> x;
        // string s=to_string(x+1);
        // vector<int>res;
        // for(long long i=0;i<s.size();i++){
        //     // cout<<s[i]<<" ";
        //     res.push_back(s[i]-'0');
        // }
        // return res;

        reverse(digits.begin(), digits.end());
        int c=1;
        for(int i=0;i<digits.size() and c;i++) {
            digits[i]+=c;
            c=digits[i]/10;
            digits[i]%=10;
        }
        if(c) digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};