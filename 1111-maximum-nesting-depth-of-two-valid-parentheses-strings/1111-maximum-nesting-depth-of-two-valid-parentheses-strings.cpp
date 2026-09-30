class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int count = 0;
        int maxcount = 0;

        for (int i = 0; i < seq.size(); i++) {
            if (seq[i] == '(') {
                count++;
            } else if (seq[i] == ')') {
                count--;
            }
            maxcount = max(maxcount, count);
        }

        int part = maxcount / 2;
        vector<int> ans(seq.size(), 0);

        bool runb = false;
        for (int i = 0; i < seq.size(); i++) {
            if (seq[i] == '(') {
                count++;
            } else if (seq[i] == ')') {
                count--;
            }

            if (!runb && count > part) {
                ans[i] = 1;
                runb = true;
            } else if (runb && count >= part) {
                ans[i] = 1;
                if (part == count) {
                    runb = false;
                }
            }
        }
        return ans;
    }
};