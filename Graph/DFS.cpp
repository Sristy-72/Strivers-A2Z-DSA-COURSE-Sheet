//DFS of Graph


//Given a connected undirected graph containing V vertices represented by a 2-d adjacency list adj[][], 
//where each adj[i] represents the list of vertices connected to vertex i. Perform a Depth First Search (DFS) 
//traversal starting from vertex 0, visiting vertices from left to right as per the given adjacency list, and
//return a list containing the DFS traversal of the graph.

//Note: Do traverse in the same order as they are in the given adjacency list.

//Examples:

//Input: adj[][] = [[2, 3, 1], [0], [0, 4], [0], [2]]

//Output: [0, 2, 4, 3, 1]

class Solution {
    private:
    void dfsofGraph(vector<int>& ls, vector<vector<int>>& adj, vector<int>& vis, int node) {
        vis[node] = 1;
        ls.push_back(node);
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfsofGraph(ls, adj, vis, it);
            }
        }
    }

public:
    vector<int> dfs(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> vis(n, 0);
        vector<int> ls;
        int start = 0; // assuming DFS starts at 0
        dfsofGraph(ls, adj, vis, start);
        return ls;
    }
};
