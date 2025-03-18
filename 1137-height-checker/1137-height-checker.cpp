class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> expected = heights;

        

        sort(expected.begin(), expected.end());

        for (int j = 0; j < heights.size(); j++) {
            if (expected[j] != heights[j])
                count++;
        }

        return (count);
    }
};
}