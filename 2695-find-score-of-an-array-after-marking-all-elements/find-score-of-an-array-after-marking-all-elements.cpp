class Solution {
public:
    typedef pair<int, int> pi; 
    long long findScore(vector<int>& nums) {
        unordered_map<int, int> mp;
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        long long ans = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++) pq.push(make_pair(nums[i], i));
        while (!pq.empty()){
            int val = pq.top().first, index = pq.top().second;
            if (mp.find(index) == mp.end()){
                ans += val;
                mp[index]++;
                mp[index + 1]++;
                mp[index - 1]++;
            }
            pq.pop();
        }
        return ans;
    }
};