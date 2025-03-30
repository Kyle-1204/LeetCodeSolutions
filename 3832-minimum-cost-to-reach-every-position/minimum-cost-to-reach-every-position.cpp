class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int minCost = INT_MAX;
        for (auto& person: cost){
            minCost = min(person, minCost);
            person = minCost;
        }
        return cost;
    }
};