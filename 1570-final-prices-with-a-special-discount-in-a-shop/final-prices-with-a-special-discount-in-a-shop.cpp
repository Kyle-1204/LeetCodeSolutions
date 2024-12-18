class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int size = prices.size();
        for (int left = 0; left < size - 1; left++){
            int right = left + 1;
            for (int right = left + 1; right < size; right++){
                if (prices[left] >= prices[right]){
                    prices[left] -= prices[right];
                    break;
                }
            }
        }
        return prices;
    }
};