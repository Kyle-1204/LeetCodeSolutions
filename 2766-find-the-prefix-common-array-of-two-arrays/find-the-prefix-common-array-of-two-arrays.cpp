class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> mp;
        int numCommon = 0;
        for (int i = 0; i < A.size(); i++){
            mp[A[i]]++;
            if (mp[A[i]] == 2) numCommon++;
            mp[B[i]]++;
            if (mp[B[i]] == 2) numCommon++;
            A[i] = numCommon;
        }
        return A;
    }
};