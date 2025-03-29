class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start,
                                int destination) {
        int n = distance.size();
        if (start > destination)
            swap(start, destination);
        int dist1 = 0;
        for (int i = start; i < destination; ++i) {
            dist1 += distance[i];
        }
        int dist2 = 0;
        int i = destination;
        while (i != start) {
            dist2 += distance[i];
            i = (i + 1) % n;
        }
        return min(dist1, dist2);
    }
};