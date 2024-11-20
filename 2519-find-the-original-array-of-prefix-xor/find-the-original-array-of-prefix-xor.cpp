class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int currXor = 0;
        for (auto& val: pref){
            val ^= currXor;
            currXor ^= val;
        }
        return pref;
    }
};