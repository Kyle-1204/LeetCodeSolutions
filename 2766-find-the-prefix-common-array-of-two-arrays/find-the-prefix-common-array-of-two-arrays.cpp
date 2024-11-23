class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int size = A.size(), numCommon = 0;
        vector<int> ans(size), vals(size);
        ans[size - 1] = size;
        for (int i = 0; i < size - 1; i++){
            int aVal = A[i] - 1, bVal = B[i] - 1;
            vals[aVal]++;
            if (vals[aVal] == 2) numCommon++;
            vals[bVal]++;
            if (vals[bVal] == 2) numCommon++;
            ans[i] = numCommon;
        }
        return ans;
    }
};