class Solution {
public:
    typedef pair<long long, pair<int, int>> pi; //(time, (r,n))
    long long repairCars(vector<int>& ranks, int cars) {
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        for (auto& rank: ranks) pq.push(make_pair(rank, make_pair(rank, 1)));
        while (--cars){
            int r = pq.top().second.first, n = pq.top().second.second;
            n++;
            pq.push(make_pair((long long) (r) * n * n, make_pair(r, n)));
            pq.pop();
        }
        return pq.top().first;
    }
};