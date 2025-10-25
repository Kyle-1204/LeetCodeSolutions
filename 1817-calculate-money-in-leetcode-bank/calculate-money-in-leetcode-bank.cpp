class Solution {
public:
    int totalMoney(int n) {
        int ans = 0, addend = 1, startVal = 1, day = 0;
        while (n--){
            ans += addend;
            day++;
            if (day == 7){
                startVal++;
                addend = startVal;
                day = 0;
            }
            else addend++;
        }
        return ans;
    }
};