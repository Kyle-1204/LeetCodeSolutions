class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int ans = 1, left = 0, right = 0, size = nums.size();
        while (right < size){
            while (right < size && setBits(nums[right])) right++;
            ans = max(right - left, ans);
            resetBits(nums[left]);
            left++;
        }
        return ans;
    }
private:
    bitset<32> bits;
    bool setBits(int n){
        vector<int> setBits;
        int bit = 0;
        while (n){
            if (n % 2){
                if (bits.test(bit)) return false;
                setBits.push_back(bit);
            }
            bit++;
            n /= 2;
        }
        for (auto& setBit: setBits) bits.set(setBit);
        return true;
    }
    void resetBits(int n){
        int bit = 0;
        while (n){
            if (n % 2) bits.flip(bit);
            bit++;
            n /= 2;
        }
    }
};