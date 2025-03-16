class Solution {
public:
    typedef pair<long long, pair<int, int>> pi;
    long long repairCars(vector<int>& ranks, int cars) {
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        for (auto& rank: ranks){
            pq.push(make_pair((long long) rank, make_pair(rank, 1)));
        }
        //cars++;
        long long ans = 0;
        while (cars--){
            int rank = pq.top().second.first, mins = pq.top().second.second;
            long long time = pq.top().first;
            //cout << time << endl;
            ans = max(ans, time);
            mins++;
            //time = (long long) (rank) * mins * mins;
            pq.push(make_pair((long long) (rank) * mins * mins, make_pair(rank, mins)));
            pq.pop();
        }
        /*
        long long ans = 0;
        while (!pq.empty()) {
            ans = pq.top().first;
            cout << ans << endl;
            pq.pop();
        }
        */
        return ans;
    }
};