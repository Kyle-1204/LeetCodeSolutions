class Solution {
public:
    typedef pair<int, int> pi; 
    long long findScore(vector<int>& nums) {
        int size = nums.size();
        vector<int> marks(size);
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        long long ans = 0;
        for (int i = 0; i < size; i++) pq.push(make_pair(nums[i], i));
        while (!pq.empty()){
            int index = pq.top().second;
            if (marks[index] == 0){
                ans += pq.top().first;
                marks[index] = 1;
                if (index > 0) marks[index - 1] = 1;
                if (index < size - 1) marks[index + 1] = 1;
            }
            pq.pop();
        }
        return ans;
    }
};