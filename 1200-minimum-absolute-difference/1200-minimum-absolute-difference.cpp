class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int ans = INT_MAX;
        sort(arr.begin(), arr.end());
        vector<vector<int>> array;

        for (int i = 1; i < arr.size(); i++) {
            ans = min(ans, (arr[i] - arr[i - 1]));
        }

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] == ans)
                array.push_back({arr[i - 1], arr[i]});
        }

        return array;
    }
};