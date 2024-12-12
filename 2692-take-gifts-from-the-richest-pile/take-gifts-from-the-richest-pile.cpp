class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> pq;
        long long numRemaining = 0;
        for (auto& gift: gifts) pq.push(gift);
        while (k--){
            long long sqRoot = sqrt(pq.top());
            pq.pop();
            pq.push(sqRoot);
        }
        while(!pq.empty()){
            numRemaining += pq.top();
            pq.pop();
        }
        return numRemaining;
    }
};