class Solution {
private:
    unordered_map<int, int> bobPath;
    vector<bool> visited;
    vector<vector<int>> tree;
    int maxVal = INT_MIN;

    // Depth First Search to find Bob's path
    bool findBobPath(int sourceNode, int time) {
        bobPath[sourceNode] = time;
        visited[sourceNode] = true;
        if (sourceNode == 0) return true;

        for (auto adjacentNode : tree[sourceNode]) {
            if (!visited[adjacentNode] && findBobPath(adjacentNode, time + 1)) {
                return true;
            }
        }
        bobPath.erase(sourceNode);
        return false;
    }

    // Depth First Search to find the most profitable path
    void dfs(int src, int time, int income, vector<int>& amount) {
        visited[src] = true;

        if (bobPath.find(src) == bobPath.end() || time < bobPath[src]) {
            income += amount[src];
        } else if (time == bobPath[src]) {
            income += (amount[src] / 2);
        }

        // If current node is a leaf and not the root
        if (tree[src].size() == 1 && src != 0) {
            maxVal = max(maxVal, income);
        }
        
        for (auto adjacentNode : tree[src]) {
            if (!visited[adjacentNode]) {
                dfs(adjacentNode, time + 1, income, amount);
            }
        }
    }

public:
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        int n = edges.size() + 1;
        tree.resize(n);
        visited.assign(n, false);

        for (auto edge : edges) {
            tree[edge[0]].push_back(edge[1]);
            tree[edge[1]].push_back(edge[0]);
        }

        findBobPath(bob, 0);
        visited.assign(n, false);
        dfs(0, 0, 0, amount);
        
        return maxVal;
    }
};