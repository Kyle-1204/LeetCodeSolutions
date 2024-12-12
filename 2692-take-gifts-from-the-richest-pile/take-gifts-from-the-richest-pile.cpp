class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int end = gifts.size() - 1;
        while (k--){
            sort(gifts.begin(), gifts.end());
            gifts[end] = sqrt(gifts[end]);
        }
        return accumulate(gifts.begin(), gifts.end(), 0LL);
    }
};