class Solution {
    int findNumBits(int n){
        int numBits = 0;
        while (n){
            if (n % 2) numBits++;
            n /= 2;
        }
        return numBits;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int, int>> pq;
        for (auto &num: arr) pq.push(make_pair(findNumBits(num), num));
        int index = arr.size() - 1;
        while (!pq.empty()){
            arr[index] = pq.top().second;
            pq.pop();
            index--;
        }
        return arr;
    }
};