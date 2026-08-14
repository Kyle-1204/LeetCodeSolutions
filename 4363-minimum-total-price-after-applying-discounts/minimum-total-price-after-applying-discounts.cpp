class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end(), greater<>());
        sort(discounts.begin(), discounts.end(), greater<>());
        double sum = 0.0;
        for (int i = 0; i < prices.size(); i++){
            double discount = (i < discounts.size() ? (double) (100 - discounts[i]) / 100 : 1.0);
            sum += prices[i] * discount;
        }
        return sum;
    }
};