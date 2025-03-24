class Solution {
public:
    int maxPotholes(string road, int budget) {
        priority_queue<int> pq;
        int numConsecutive = 0, maxHoles = 0;
        for (auto& chr: road){
            if (chr == 'x') numConsecutive++;
            else if (numConsecutive) {
                pq.push(numConsecutive + 1);
                numConsecutive = 0;
            }
        }
        if (numConsecutive) pq.push(numConsecutive + 1);
        while (budget && !pq.empty()){
            int numHoles = min(pq.top(), budget);
            budget -= numHoles;
            maxHoles += numHoles - 1;
            pq.pop();
        }
        return maxHoles;
    }
};