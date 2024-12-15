class Solution {
public:
    typedef pair<double, pair<int, int>> pi;
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pi> pq;
        double sum = 0;
        int size = classes.size();
        for (int i = 0; i < size; i++){
            int n = classes[i][0], d = classes[i][1];
            if (n != d){
                double diff = (double) (n+1)/(d+1) - (double) n/d;
                pq.push(make_pair(diff, make_pair(n, d)));
            }
            else sum++;
        }
        if (pq.empty()) return 1.0;
        while (extraStudents--){
            int newN = pq.top().second.first + 1, newD = pq.top().second.second + 1;
            double diff = (double) (newN+1)/(newD+1) - (double) newN/newD;
            pq.pop();
            pq.push(make_pair(diff, make_pair(newN, newD)));
        }
        while (!pq.empty()){
            sum += (double) pq.top().second.first/pq.top().second.second;
            pq.pop();
        }
        return sum/size;
    }
};