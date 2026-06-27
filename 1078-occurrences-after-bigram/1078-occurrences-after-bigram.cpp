class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> v, ans;
        string s; stringstream ss(text);
        while(ss >> s) v.push_back(s);
        for(int i = 2; i < v.size(); i++) {
            if(v[i-2] == first && v[i-1] == second) ans.push_back(v[i]);
        }        
        return ans;
    }
};