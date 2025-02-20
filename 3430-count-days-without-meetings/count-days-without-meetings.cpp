class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        //vector<int> vect(days + 1);
        map<int, int> dayMap;
        int prefixSum = 0, numDaysWithoutMeetings = 0, previousDay = days;
        for (auto& meeting: meetings){
            previousDay = min(previousDay, meeting[0]);
            dayMap[meeting[0]]++;
            dayMap[meeting[1] + 1]--;
        }
        bool gapWithNoMeeting = false;
        numDaysWithoutMeetings += (previousDay - 1);
        for (auto& day: dayMap){
            if (gapWithNoMeeting){
                numDaysWithoutMeetings += day.first - previousDay;
                gapWithNoMeeting = false;
            }
            prefixSum += day.second;
            if (prefixSum == 0) {
                gapWithNoMeeting = true;
            }
            previousDay = day.first;
        }
        numDaysWithoutMeetings += days - previousDay + 1;
        return numDaysWithoutMeetings;
    }
};