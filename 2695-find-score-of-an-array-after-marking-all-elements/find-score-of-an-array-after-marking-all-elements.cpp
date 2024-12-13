class Solution {
public:
    typedef pair<int, int> pi; 
    long long findScore(vector<int>& nums) {
        unordered_map<int, int> mp;
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        long long ans = 0;
        for (int i = 0; i < nums.size(); i++) pq.push(make_pair(nums[i], i));
        while (!pq.empty()){
            int index = pq.top().second;
            if (mp.find(index) == mp.end()){
                ans += pq.top().first;
                mp[index]++;
                mp[index + 1]++;
                mp[index - 1]++;
            }
            pq.pop();
        }
        return ans;
    }
};