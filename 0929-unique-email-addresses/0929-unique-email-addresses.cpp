class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> res;
        for (const string& email : emails) {
            const size_t found = email.find('@');
            const string localname = email.substr(0, found);
            const size_t plus = localname.find('+');
            stringstream ss(localname.substr(0, plus));
            string nm;
            string name;
            while (getline(ss, nm, '.'))
                name += nm;
            res.insert(name + email.substr(found));
        }
        return res.size();
    }
};