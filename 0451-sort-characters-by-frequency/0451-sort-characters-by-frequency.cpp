class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:mp)
        {
            pair<int,char>p;
            p.first=i.second;
            p.second=i.first;
            pq.push(p);
        }
        while(!pq.empty())
        {
            pair<int,char>p=pq.top();
            pq.pop();
            int a=p.first;
            while(a)
            {
                ans+=p.second;
                a--;
            }
        }
        return ans;
    }
};