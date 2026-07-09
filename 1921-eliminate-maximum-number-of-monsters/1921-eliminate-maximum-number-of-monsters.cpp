class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> arrival(n);

        for (int i = 0; i < n; i++) {
            arrival[i] = (dist[i] + speed[i] - 1) / speed[i];
        }
        sort(arrival.begin(), arrival.end());

        for (int i = 0; i < n; i++) {
            if (arrival[i] <= i) {
                return i;
            }
        }

        return n;
    }
};