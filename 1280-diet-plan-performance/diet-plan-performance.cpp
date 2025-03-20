class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int numCalories = 0, numPoints = 0;
        for (int i = 0; i < k; i++) numCalories += calories[i];
        if (numCalories < lower) numPoints--;
        else if (numCalories > upper) numPoints++;
        for (int i = k; i < calories.size(); i++){
            numCalories -= calories[i-k];
            numCalories += calories[i];
            if (numCalories < lower) numPoints--;
            else if (numCalories > upper) numPoints++;
        }
        return numPoints;
    }
};