class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        if (meetings.empty()) return days; 
        
        sort(meetings.begin(), meetings.end()); // Sort meetings by start time
        
        int numDaysWithoutMeetings = 0;
        int lastEnd = 0; // Tracks end of the last meeting

        for (auto& meeting : meetings) {
            int start = meeting[0], end = meeting[1];
            
            // Count free days before the current meeting
            if (start > lastEnd + 1) {
                numDaysWithoutMeetings += start - lastEnd - 1;
            }
            
            // Update lastEnd to track merged meetings
            lastEnd = max(lastEnd, end);
        }
        
        // Count free days after the last meeting
        numDaysWithoutMeetings += days - lastEnd;

        return numDaysWithoutMeetings;
    }
};