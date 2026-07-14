class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int start = 0, end = 0;
        start += startTime[7] - '0';
        end += endTime[7] - '0';
        start += (startTime[6] - '0') * 10;
        end += (endTime[6] - '0') * 10;
        start += (startTime[4] - '0') * 60;
        end += (endTime[4] - '0') * 60;
        start += (startTime[3] - '0') * 600;
        end += (endTime[3] - '0') * 600;
        start += (startTime[1] - '0') * 3600;
        end += (endTime[1] - '0') * 3600;
        start += (startTime[0] - '0') * 36000;
        end += (endTime[0] - '0') * 36000;
        return end - start;
    }
};