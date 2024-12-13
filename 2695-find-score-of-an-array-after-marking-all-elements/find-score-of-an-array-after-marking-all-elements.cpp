class Solution {
public:
    typedef pair<int, int> pi; 
    long long findScore(vector<int>& nums) {
        unordered_set<int> set;
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        long long ans = 0;
        for (int i = 0; i < nums.size(); i++) pq.push(make_pair(nums[i], i));
        while (!pq.empty()){
            int index = pq.top().second;
            if (set.find(index) == set.end()){
                ans += pq.top().first;
                set.insert(index);
                set.insert(index + 1);
                set.insert(index - 1);
            }
            pq.pop();
        }
        return ans;
    }
};