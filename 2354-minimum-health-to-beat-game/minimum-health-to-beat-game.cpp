class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        return accumulate(damage.begin(), damage.end(), 0LL) - min(armor, *max_element(damage.begin(), damage.end())) + 1;
    }
};