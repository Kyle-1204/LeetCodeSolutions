class Solution {
public:
        //Have to redo
    int minimumObstacles(vector<vector<int>>& grid) {
        int n=grid.size(); // y 
        int m=grid[0].size(); // x
        map<pair<int,int>,vector<pair<pair<int,int>,int>>> graph;
        //[index]={{coordinates,weight},.......}

        //Make Graph
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j<m-1) graph[{i,j}].push_back({{i,j+1},grid[i][j+1]});
                if(i<n-1) graph[{i,j}].push_back({{i+1,j},grid[i+1][j]});
                if(j>0) graph[{i,j}].push_back({{i,j-1},grid[i][j-1]});
                if(i>0) graph[{i,j}].push_back({{i-1,j},grid[i-1][j]});
            }
        }
        // priority_queue
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
        // {distance, {coordinates}}
        q.push({0,{0,0}});

        //minimum distance [x][y] =distance
        // minimun dist;
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        dist[0][0]=0;

        while(!q.empty()){
            auto node=q.top().second;
            int distance=q.top().first;
            q.pop();

            for(auto it:graph[node]){
                auto [adj,weight]=it;
                int x=adj.first;
                int y=adj.second;

                if(weight+distance<dist[x][y]){
                    dist[x][y]=weight+distance;
                    q.push({weight+distance,adj});
                }
            }
        }


        return dist[n-1][m-1];
    }
};