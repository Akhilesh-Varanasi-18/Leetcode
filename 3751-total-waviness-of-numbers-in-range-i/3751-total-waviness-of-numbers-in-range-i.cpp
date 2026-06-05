class Solution {
public:
    int cnt(int n){
        string s = to_string(n);
        int c=0;
        int si = s.size();
        if(si < 3)return 0;
        for(int i=1;i<si-1;i++){
            if(s[i]<s[i-1] and s[i]<s[i+1])c++;
            if(s[i]>s[i-1] and s[i]>s[i+1])c++;
        }
        return c;
    }
    int totalWaviness(int num1, int num2) {
        int s=0;
        for(int i=num1;i<=num2;i++)s+=cnt(i);
        return s;
    }
};