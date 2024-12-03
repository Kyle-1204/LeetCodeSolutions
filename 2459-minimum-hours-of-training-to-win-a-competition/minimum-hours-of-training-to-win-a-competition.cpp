class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int trainingTime = 0, numOpps = energy.size();
        for (int i = 0; i < numOpps; i++){
            if (initialExperience <= experience[i]){
                int diff = experience[i] - initialExperience + 1;
                trainingTime += diff;
                initialExperience += diff;
            }
            if (initialEnergy <= energy[i]){
                int diff = energy[i] - initialEnergy + 1;
                trainingTime += diff;
                initialEnergy += diff;
            }
            initialEnergy -= energy[i];
            initialExperience += experience[i];
        }
        return trainingTime;
    }
};