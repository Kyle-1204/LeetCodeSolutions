class Solution {
public:
    string maximumTime(string time) {
        if (time[4] == '?') time[4] = '9';
        if (time[3] == '?') time[3] = '5';
        if (time[1] == '?') time[1] = (time[0] == '2' || time[0] == '?' ? '3' : '9');
        if (time[0] == '?') time[0] = (time[1] - '0' > 3 ? '1' : '2');
        return time;
    }
};