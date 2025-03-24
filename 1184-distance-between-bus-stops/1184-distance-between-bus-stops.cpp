class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start,
                                int destination) {
        int d1 = 0;
        int i = start;
        int n = distance.size();
        while (i != destination) {
            d1 += distance[i];
            i = (i + 1) % n;
        }

        int d2 = 0;
        i = (start + n - 1) % n;

        while (i != destination) {
            d2 += distance[i];
            i = (i + n - 1) % n;
        }
        d2 += distance[i];

        return min(d1, d2);
    }
};
