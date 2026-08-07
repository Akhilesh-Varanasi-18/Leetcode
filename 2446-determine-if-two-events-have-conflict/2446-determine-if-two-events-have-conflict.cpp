class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        vector<string>ans;
        
        string x = event1[1];
        string y = event2[0];
        string a = event1[0];
        string b = event2[1];

  
        if(x < y || a>b) return false;
        return true;
    }
};