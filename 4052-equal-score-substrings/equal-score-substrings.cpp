class Solution {
public:
    bool scoreBalance(string s) {
        int rightSum = 0, leftSum = 0;
        for (auto& chr: s) rightSum += (chr - 'a' + 1);
        for (auto& chr: s){
            leftSum += (chr - 'a' + 1);
            rightSum -= (chr - 'a' + 1);
            if (leftSum == rightSum) return true;
        }
        return false;
    }
};