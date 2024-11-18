class Solution {
    int findLargestDigit(int n){
        int digit = 0;
        while (n){
            digit = max(digit, n % 10);
            n /= 10;
        }
        return digit;
    }
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int, priority_queue<int>> mp;
        int maxSum = -1;
        for (auto& num: nums) mp[findLargestDigit(num)].push(num);
        for (auto& digit: mp){
            priority_queue<int> pq = digit.second;
            if (pq.size() >= 2){
                int first = pq.top();
                pq.pop();
                maxSum = max(first + pq.top(), maxSum);
            }
        }
        return maxSum;
    }
};