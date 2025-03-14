
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int, int> u;
        for (int i = 0; i < A.size(); i++) {
            u[A[i]]++;
        }
        int n = A.size();
        int res;
        for (auto i : u)
            if (i.second == n / 2)
                res = i.first;
        return res;
    }
};