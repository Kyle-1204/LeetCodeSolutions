class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (auto& num: nums) pq.push(num);
        int numOpps = 0;
        while (pq.top() < k){
            long long first = pq.top();
            pq.pop();
            long long second = pq.top(), newVal = min(first, second) * 2 + max(first, second);
            pq.pop();
            pq.push(newVal);
            numOpps++;
        }
        return numOpps;
    }
};