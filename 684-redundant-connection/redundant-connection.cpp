class UnionSet{
private: 
    vector<int> rank, parent;
public:
    UnionSet(int n){
        rank.resize(n);
        parent.resize(n);

        //Initially, each element is in its own set
        for (int i = 1; i < n; i++){
            parent[i] = i;
        }
    }
    int find(int x){
        if (parent[x] != x) {
            //Path compression
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    void unite(int x, int y){
        int xRoot = find(x);
        int yRoot = find(y);

        // Already part of same set
        if (xRoot == yRoot) return;

        // Union by rank
        if (rank[xRoot] < rank[yRoot]) parent[xRoot] = yRoot;
        else if (rank[xRoot] > rank[yRoot]) parent[yRoot] = xRoot;
        else{
            parent[yRoot] = xRoot;
            rank[xRoot]++;
        }
    }
};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> ans(2);
        UnionSet graph(n + 1);
        for (int i = 0; i < n; i++){
            int x = edges[i][0], y = edges[i][1];
            //points are already connected
            if (graph.find(x) == graph.find(y)){
                ans[0] = x;
                ans[1] = y;
            }
            graph.unite(x, y);
        }
        return ans;
    }
};