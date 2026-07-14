class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int start = 0, end = 0, mult = 1;
        bool isSecondDigit = true;
        for (int i = 7; i >= 0; i--){
            start += (startTime[i] - '0') * mult;
            end += (endTime[i] - '0') * mult;
            if (isSecondDigit) mult *= 10;
            else{
                mult *= 6;
                i--;
            }
            isSecondDigit = !isSecondDigit;
        }
        return end - start;
    }
};