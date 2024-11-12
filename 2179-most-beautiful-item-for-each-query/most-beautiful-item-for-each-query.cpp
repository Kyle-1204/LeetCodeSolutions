class Solution {
public:
    typedef pair<int, int> pi; 
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        unordered_map<int, int> mp;
        vector<int> ans = queries;
        sort(queries.begin(), queries.end());
        for (auto& item: items) pq.push(make_pair(item[0], item[1]));
        int maxBeauty = 0;
        for (auto& query: queries){
            while (!pq.empty()){
                int currPrice = pq.top().first, currBeauty = pq.top().second;
                if (query >= currPrice){
                    maxBeauty = max(maxBeauty, currBeauty);
                    pq.pop();
                    if (pq.empty() || query < pq.top().first) {
                        pq.push(make_pair(currPrice, currBeauty));
                        break;
                    }
                }
                else break;
            }
            mp[query] = maxBeauty;
        }
        for (auto& val: ans) val = mp[val];
        return ans;
    }
};