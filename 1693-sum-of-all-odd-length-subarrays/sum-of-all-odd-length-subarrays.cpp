class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int size = arr.size(), len = 1, totalSum = 0;
        while (size >= len){
            int start = 0, sum = 0, end = len;
            for (int i = 0; i < len; i++) sum += arr[i];
            while (size > end){
                totalSum += sum;
                sum -= arr[start++];
                sum += arr[end++];
            }
            totalSum += sum;
            len += 2;
        }
        return totalSum;
    }
};