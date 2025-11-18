class Solution {
private:
    vector<vector<int>> paths;
    void findPaths(vector<vector<int>>& graph, vector<int> currPath, int currNode, int n){
        if (currNode == n) {
            currPath.push_back(currNode);
            paths.push_back(currPath);
        }
        else{
            for (auto& node: graph[currNode]){
                vector<int> newPath = currPath;
                newPath.push_back(currNode);
                findPaths(graph, newPath, node, n);
            }
        }
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        for (auto& startNode: graph[0]){
            findPaths(graph, {0}, startNode, graph.size() - 1);
        }
        return paths;
    }
};