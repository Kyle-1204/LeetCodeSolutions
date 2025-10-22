class Solution {
private:
    bool isPrime(int num){
        if (num == 1) return false;
        for (int i = 2; i < num - 1; i++){
            if (num % i == 0) return false;
        }
        return true;
    }
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto& num: nums) mp[num]++;
        for (auto& val: mp) {
            if (isPrime(val.second)) return true;
        }
        return false;
    }
};