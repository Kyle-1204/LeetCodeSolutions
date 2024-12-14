class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<double, vector<double>, greater<double>> pq;
        unordered_map<double, pair<int, int>> mp;
        int size = arr.size();
        for (int i = 0; i < size - 1; i++){
            for (int j = i+1; j < size; j++){
                int d = arr[i], n = arr[j];
                double frac = (double) d/n;
                pq.push(frac);
                mp[frac] = make_pair(d, n);
            }
        }
        while (--k) pq.pop();
        double top = pq.top();
        return {mp[top].first, mp[top].second};
    }
};