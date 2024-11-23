class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int size = A.size(), numCommon = 0;
        vector<int> ans(size);
        ans[size - 1] = size;
        unordered_map<int, int> mp;
        for (int i = 0; i < size - 1; i++){
            int aVal = A[i], bVal = B[i];
            mp[aVal]++;
            if (mp[aVal] == 2) numCommon++;
            mp[bVal]++;
            if (mp[bVal] == 2) numCommon++;
            ans[i] = numCommon;
        }
        return ans;
    }
};