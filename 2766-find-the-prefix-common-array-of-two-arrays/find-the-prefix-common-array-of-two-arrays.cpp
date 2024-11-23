class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int size = A.size();
        vector<int> ans(size);
        ans[size - 1] = size;
        unordered_map<int, int> aMap, bMap;
        for (int i = 0; i < size - 1; i++){
            int numCommon = 0;
            aMap[A[i]]++;
            bMap[B[i]]++;
            for (auto& val: aMap){
                if (val.second == bMap[val.first]) numCommon++;
            }
            ans[i] = numCommon;
        }
        return ans;
    }
};