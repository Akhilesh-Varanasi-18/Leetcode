class Solution {
public:
    long long func(long long alloys_to_be_made, vector<int>& composition,
                   vector<int>& currhaving, vector<int>& cost) {
        long long budget = 0;

        for (int i = 0; i < composition.size(); i++) {
            long long req_units =
                ((alloys_to_be_made * ((long long)composition[i])) -
                 currhaving[i]);
            if (req_units > 0) {
                budget += (req_units * ((long long)cost[i]));
            }
        }

        return budget;
    }

    int maxNumberOfAlloys(int n, int k, int budget,
                          vector<vector<int>>& composition, vector<int>& stock,
                          vector<int>& cost) {
        int ans = 0;

        for (int i = 0; i < k; i++) {
            int low = 0, high = 1e9;
            int currans = 0;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (func(mid, composition[i], stock, cost) <= budget) {
                    currans = mid;
                    low = mid + 1;
                }

                else {
                    high = mid - 1;
                }
            }

            ans = max(ans, currans);
        }

        return ans;
    }
};