class Solution {
private:
    bitset<32> bits;
    void findSetBits(int n){
        int index = 0;
        while (n){
            if (n % 2) bits.flip(index);
            n /= 2;
            index++;
        }
    }
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0, size1 = nums1.size(), size2 = nums2.size();
        if (size2 % 2){
            for (int i = 0; i < nums1.size(); i++) findSetBits(nums1[i]);
        }
        if (size1 % 2){
            for (int j = 0; j < nums2.size(); j++) findSetBits(nums2[j]);
        }
        for (int i = 0; i < 31; i++) {
            if (bits[i] == 1) ans += pow(2, i);
        }
        return ans;
    }
};