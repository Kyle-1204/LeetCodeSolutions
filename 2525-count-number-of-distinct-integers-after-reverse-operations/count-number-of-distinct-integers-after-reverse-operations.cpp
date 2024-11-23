class Solution {
private:
    int reverse(int n){
        int reversedInt = 0;
        while (n){
            reversedInt *= 10;
            reversedInt += (n % 10);
            n /= 10;
        }
        return reversedInt;
    }
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto& num: nums){
            mp[num]++;
            mp[reverse(num)]++;
        }
        return mp.size();
    }
};