class Solution {
public:
map<string,int>m;
void stringstreeam(string s){
    stringstream ss(s);
    string w;
    while(ss>>w)m[w]++;
} 
    vector<string> uncommonFromSentences(string s1, string s2) {
        stringstreeam(s1);
        stringstreeam(s2);
        vector<string>res;
        for(auto i:m){
            if(i.second==1)res.push_back(i.first);
        }
        return res;
    }
};