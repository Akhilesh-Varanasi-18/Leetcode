class Solution {
public:
    int solve(vector<int>& v1, vector<int>& t1, vector<int>& v2,
              vector<int>& t2) {
        int time = INT_MAX;
        for (int i = 0; i < v1.size(); i++) {
            time = min(time, v1[i] + t1[i]);
        }
        int finishtime = INT_MAX;
        for (int i = 0; i < v2.size(); i++) {
            int newtime = max(v2[i], time) + t2[i];
            finishtime = min(newtime, finishtime);
        }
        return finishtime;
    }
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {

        int land_water =
            solve(landStartTime, landDuration, waterStartTime, waterDuration);
        int water_land =
            solve(waterStartTime, waterDuration, landStartTime, landDuration);

        return min(land_water, water_land);
    }
};