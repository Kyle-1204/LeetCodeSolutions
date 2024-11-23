class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int size = A.size();
        vector<int> ans(size), commonVals;
        ans[size - 1] = size;
        unordered_map<int, int> aMap, bMap;
        for (int i = 0; i < size - 1; i++){
            int aVal = A[i], bVal = B[i];
            aMap[aVal]++;
            if (aMap[aVal] == bMap[aVal]) commonVals.push_back(aVal);
            bMap[B[i]]++;
            if (aMap[bVal] == bMap[bVal]) commonVals.push_back(bVal);
            ans[i] = commonVals.size();
        }
        return ans;
    }
};