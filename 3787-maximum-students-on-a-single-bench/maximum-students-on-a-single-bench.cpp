class Solution {
public:
    int maxStudentsOnBench(vector<vector<int>>& students) {
        unordered_map<int, unordered_set<int>> mp;
        int maxStudents = 0;
        for (auto& student: students){
            int bench = student[1];
            mp[bench].insert(student[0]);
            maxStudents = max(maxStudents, (int) mp[bench].size());
        }
        return maxStudents;
    }
};