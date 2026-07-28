class Solution {
public:
    class DSU {
    public:
        vector<int> v;
        DSU(int n) { v.assign(n, -1); }

        int find(int root) {
            int parent = root;
            while (v[parent] >= 0) {
                parent = v[parent];
            }

            while (v[root] >= 0) {
                int temp = v[root];
                v[root] = parent;
                root = temp;
            }

            return parent;
        }

        bool merge(int n1, int n2) {
            int p1 = find(n1);
            int p2 = find(n2);

            if (p1 == p2)
                return false;

            v[p2] = p1;

            return true;
        }
    };

    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int sN = s.length();
        DSU dsu(sN);

        for (auto pair : pairs) {
            dsu.merge(pair[0], pair[1]);
        }

        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < sN; i++) {
            mp[dsu.find(i)].push_back(i);
        }

        for (auto [root, members] : mp) {
            if (members.size() == 1)
                continue;

            vector<char> ch;
            for (auto member : members)
                ch.push_back(s[member]);
            sort(ch.begin(), ch.end());

            for (int i = 0; i < members.size(); i++) {
                s[members[i]] = ch[i];
            }
        }

        return s;
    }
};