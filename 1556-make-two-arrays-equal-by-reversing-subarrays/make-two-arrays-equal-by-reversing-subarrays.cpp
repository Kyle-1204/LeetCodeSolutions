class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> mp1, mp2;
        int size = target.size();
        for (int i = 0; i < size; i++){
            mp1[target[i]]++;
            mp2[arr[i]]++;
        }
        return (mp1 == mp2);
    }
};