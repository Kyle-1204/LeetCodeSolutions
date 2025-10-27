class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for (auto& num: nums) pq.push(num);
        vector<int> ans = {pq.top()};
        pq.pop();
        k--;
        while (k && !pq.empty()){
            if (pq.top() != ans[ans.size() - 1]){
                ans.push_back(pq.top());
                k--;
            }
            pq.pop();
        }
        return ans;
    }
};