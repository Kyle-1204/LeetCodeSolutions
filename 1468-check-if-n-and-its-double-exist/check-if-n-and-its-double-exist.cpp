class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (auto& num: arr){
            if (mp.find(num * 2) != mp.end() || (num % 2 == 0 && mp.find(num/2) != mp.end())) return true;
            mp[num]++;
        }
        return false;
    }
};