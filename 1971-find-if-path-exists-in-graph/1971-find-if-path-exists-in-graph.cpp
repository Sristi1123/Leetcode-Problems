class Solution {
public:
    bool dfs(vector<bool> &visited, vector<vector<int>>&adj, int node, int destination){
        if(node==destination) return true;
        visited[node]=true;
        for(auto neighbors:adj[node]){
            if(!visited[neighbors]){
                if(dfs(visited,adj,neighbors, destination)) return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto i: edges){
            int u=i[0];
            int v=i[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(n, false);
        return dfs(visited, adj, source, destination);
    }
};