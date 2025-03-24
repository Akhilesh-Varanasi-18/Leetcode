class Solution {
public:
    int countDays(int totalDays, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        int n = meetings.size();
        vector<vector<int>> mergedMeetings;

        for (int i = 0; i < n; i++) {
            if (mergedMeetings.empty()) {
                mergedMeetings.push_back(meetings[i]);
            } else if (mergedMeetings.back()[1] >= meetings[i][0]) {
                if (mergedMeetings.back()[1] < meetings[i][1]) {
                    mergedMeetings.back()[1] = meetings[i][1];
                }
            } else {
                mergedMeetings.push_back(meetings[i]);
            }
        }

        int freeDays = 0;
        for (int i = 0; i < mergedMeetings.size() - 1; i++) {
            freeDays +=
                max(0, mergedMeetings[i + 1][0] - mergedMeetings[i][1] - 1);
        }
        freeDays += totalDays - mergedMeetings.back()[1];
        freeDays += mergedMeetings.front()[0] - 1;

        return freeDays;
    }
};