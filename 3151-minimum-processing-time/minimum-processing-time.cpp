class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(), processorTime.end(), greater<>());
        sort(tasks.begin(), tasks.end());
        int minTime = 0, currIndex = 3, end = processorTime.size();
        for (int i = 0; i < end; i++){
            processorTime[i] += tasks[currIndex];
            minTime = max(processorTime[i], minTime);
            currIndex += 4;
        }
        return minTime;
    }
};