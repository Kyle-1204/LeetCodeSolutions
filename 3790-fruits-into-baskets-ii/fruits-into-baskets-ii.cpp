class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = 0;
        for (auto& fruit: fruits){
            bool unplaced = true;
            for (auto& basket: baskets){
                if (basket >= fruit) {
                    basket = 0;
                    unplaced = false;
                    break;
                }
            }
            if (unplaced) ans++;
        }
        return ans;
    }
};