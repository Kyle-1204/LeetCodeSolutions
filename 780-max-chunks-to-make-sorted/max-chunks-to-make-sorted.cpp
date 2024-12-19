class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        unordered_set<int> set1, set2;
        int len = arr.size(), ans = 0;
        for (int i = 0; i < len; i++){
            set1.insert(arr[i]);
            set2.insert(sorted[i]);
            if (set1 == set2) ans++;
        }
        return ans;
    }
};