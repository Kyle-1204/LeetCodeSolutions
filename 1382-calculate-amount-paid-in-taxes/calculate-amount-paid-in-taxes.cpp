class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double tax = 0;
        int prevBracket = 0;
        for (auto& bracket: brackets){
            int taxedMoney = min(bracket[0] - prevBracket, income);
            prevBracket = bracket[0];
            tax += (double) (bracket[1] * taxedMoney)/100;
            income -= taxedMoney;
            if (!income) break;
        }
        return tax;
    }
};