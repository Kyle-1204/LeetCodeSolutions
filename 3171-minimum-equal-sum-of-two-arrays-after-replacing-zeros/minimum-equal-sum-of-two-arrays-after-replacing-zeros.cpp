class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int zeroes1 = 0, zeroes2 = 0;
        long long sum1 = 0, sum2 = 0;
        for (auto& num1: nums1){
            if (num1) sum1 += num1;
            else zeroes1++;
        }
        for (auto& num2: nums2){
            if (num2) sum2 += num2;
            else zeroes2++;
        }
        return (((zeroes1 == 0 && sum2 + zeroes2 > sum1) || (zeroes2 == 0 && sum1 + zeroes1 > sum2)) ? -1 : max(sum1 + zeroes1, sum2 + zeroes2));
    }
};