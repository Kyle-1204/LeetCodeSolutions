class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        unordered_map<int, int> mp;
        vector<int> ans = queries;
        sort(queries.begin(), queries.end());
        for (auto& item: items) pq.push(make_pair(item[0], item[1])); //price, beauty
        int maxBeauty = 0;
        for (auto& query: queries){
            while (query >= pq.top().first){
                int currPrice = pq.top().first, currBeauty = pq.top().second;
                maxBeauty = max(maxBeauty, currBeauty);
                pq.pop();
                if (pq.empty() || query < pq.top().first) {
                    pq.push(make_pair(currPrice, currBeauty));
                    break;
                }
            }
            mp[query] = maxBeauty;
        }
        for (auto& val: ans) val = mp[val];
        return ans;
    }
};