class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        queue<int> q;
        for (auto& num: arr){
            q.push(num);
            if (num == 0) q.push(0);
            num = q.front();
            q.pop();
        }
    }
};