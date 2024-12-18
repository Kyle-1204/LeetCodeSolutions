class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int size = prices.size();
        for (int left = 0; left < size; left++){
            int right = left + 1, discount = 0;
            while (right < size){
                if (prices[left] >= prices[right]){
                    discount = prices[right];
                    break;
                }
                else right++;
            }
            prices[left] -= discount;
        }
        return prices;
    }
};