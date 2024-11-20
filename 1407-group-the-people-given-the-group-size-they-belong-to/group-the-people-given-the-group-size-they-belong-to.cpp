class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        priority_queue<pair<int, int>> pq;
        vector<vector<int>> ans;
        int size = groupSizes.size();
        for (int i = 0; i < size; i++) pq.push(make_pair(groupSizes[i], i));
        while(!pq.empty()){
            int groupSize = pq.top().first;
            vector<int> group(groupSize);
            for (int j = 0; j < groupSize; j++){
                group[j] = pq.top().second;
                pq.pop();
            }
            ans.push_back(group);
        }
        return ans;
    }
};