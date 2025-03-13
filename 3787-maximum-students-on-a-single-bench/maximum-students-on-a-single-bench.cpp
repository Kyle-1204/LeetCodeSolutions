class Solution {
public:
    int maxStudentsOnBench(vector<vector<int>>& students) {
        unordered_map<int, unordered_set<int>> mp;
        int maxStudents = 0;
        for (auto& student: students){
            mp[student[1]].insert(student[0]);
            maxStudents = max(maxStudents, (int) mp[student[1]].size());
        }
        return maxStudents;
    }
};