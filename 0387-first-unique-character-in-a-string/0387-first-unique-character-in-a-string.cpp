class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp1;
        map<char,int>mp2;
        int ans = INT_MAX;
        for(auto i : s){
            mp1[i]++;
        }
        for(int i = 0 ;i<s.size(); i++){
           mp2[s[i]]  = i;
        }
        for(auto i : mp2)cout<<i.first<<" "<<i.second<<endl;
        // return 0;
        for(auto i : mp1){
            if(i.second == 1){
                ans = min(ans,mp2[i.first]);
            }
        }
        if(ans == INT_MAX) return -1;
        else return ans;

        
    }
};