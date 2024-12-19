class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        unordered_set<int> st;
        int len = arr.size(), ans = 0;
        for (int i = 0; i < len; i++){
            st.insert(arr[i]);
            st.insert(sorted[i]);
            if (st.size() == i + 1) ans++;
        }
        return ans;
    }
};