class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int size1 = nums1.size(), size2 = nums2.size();
        int numPairs = 0;
        for (int i = 0; i < size1; i++){
            for (int j = 0; j < size2; j++){
                if (!(nums1[i] % (nums2[j] * k))) numPairs++;
            }
        }
        return numPairs;
    }
};