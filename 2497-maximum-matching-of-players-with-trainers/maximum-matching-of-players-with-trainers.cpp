class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        priority_queue<int> playerOrder, trainerOrder;
        for (auto& player : players) playerOrder.push(player);
        for (auto& trainer : trainers) trainerOrder.push(trainer);
        int numMatches = 0;
        while (!(playerOrder.empty() || trainerOrder.empty())){
            if (playerOrder.top() <= trainerOrder.top()){
                trainerOrder.pop();
                numMatches++;
            }
            playerOrder.pop();
        }
        return numMatches;
    }
};