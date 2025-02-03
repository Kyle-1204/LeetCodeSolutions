class Solution {
private:
    unordered_map<int, int> path;
    vector<bool> visited;
    vector<vector<int>> graph;

    //Depth First Search
    bool DFS(int src, int time){
        // Mark and set time node is reached
        path[src] = time;
        visited[src] = true;

        // Destination for Bob is found
        if(src == 0){
            return true;
        }

        // Traverse through unvisited nodes
        for(auto adj: graph[src]){
            if(!visited[adj]){
                if(DFS(adj, time + 1)){
                    return true;
                }
            }
        }   
        // If node 0 isn't reached, remove current node from path
        path.erase(src);
        return false;
    }

public:
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        int n = edges.size() + 1, maxVal = INT_MIN;
        graph.resize(n);
        visited.assign(n, false);
        queue<vector<int>> nodeQueue;
        nodeQueue.push({0, 0, 0});

        // Form tree with edges
        for(auto edge: edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        // Find the path taken by bob to reach node 0 and the times it takes to get there
        DFS(bob, 0);

        //Breadth First Search
        visited.assign(n, false);
        while(!nodeQueue.empty()){
            int src = nodeQueue.front()[0], time = nodeQueue.front()[1], income = nodeQueue.front()[2];

            // Alice reaches the node first
            if (path.find(src) == path.end() || time < path[src]) {
                income += amount[src];
            }

            // Alice and Bob reach the node at the same time
            else if (time == path[src]){
                income += (amount[src]/2);
            }
       
            // Update max value if current node is a leaf
            if(graph[src].size() == 1 && src != 0){
                maxVal = max(maxVal, income);
            }
			// Explore adjacent unvisited vertices
            for(auto adj: graph[src]){
                if(!visited[adj]){
                    nodeQueue.push({adj, time+1, income});
                }
            }
            
            // Mark and remove current node
            visited[src] = true;
            nodeQueue.pop();
        }
        
        return maxVal;
    }
};