class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (auto& num: nums) pq.push(num);
        int numOpps = 0;
        while (pq.top() < k){
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            pq.push(first * 2 + second);
            numOpps++;
        }
        return numOpps;
    }
};