class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {
        vector<int>::iterator bgn = damage.begin(), end = damage.end();
        return accumulate(bgn, end, 0LL) - min(armor, *max_element(bgn, end)) + 1;
    }
};