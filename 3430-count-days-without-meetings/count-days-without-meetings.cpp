class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        //vector<int> vect(days + 1);
        map<int, int> dayMap;
        int prefixSum = 0, freeDays = 0, previousDay = days;
        bool hasGap = false;

        for (auto& meeting: meetings){
            // Set first day of meetings
            previousDay = min(previousDay, meeting[0]);

            //Process start and end of meeting
            dayMap[meeting[0]]++;
            dayMap[meeting[1] + 1]--;
        }

        //Add all days before the first day of meetings
        freeDays += (previousDay - 1);
        for (auto& day: dayMap){

            //Add current range of days without a meeting
            if (hasGap){
                freeDays += day.first - previousDay;
                hasGap = false;
            }
            prefixSum += day.second;

            //No meetings at the current day
            if (prefixSum == 0) {
                hasGap = true;
            }
            previousDay = day.first;
        }

        //Add all days after the last day of meetings
        freeDays += days - previousDay + 1;
        return freeDays;
    }
};