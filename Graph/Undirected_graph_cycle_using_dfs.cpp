//Given an undirected graph with V vertices and E edges, represented as a 2D vector
//edges[][], where each entry edges[i] = [u, v] denotes an edge between vertices u and v,
//determine whether the graph contains a cycle or not. The graph can have multiple component.

//Examples:

//Input: V = 4, E = 4, edges[][] = [[0, 1], [0, 2], [1, 2], [2, 3]]
//Output: true
//1 -> 2 -> 0 -> 1 is a cycle.
class Solution {
  public:

 bool detectcycledfs(int node,int parentnode, vector<vector<int>>&adjls, vector<int>&vis){
      vis[node]=1;
      for(auto it:adjls[node]){
          if(vis[it]==0){
              vis[it]=1;
               if(detectcycledfs(it,node,adjls,vis)==true){
                   return true;
               }
          }
          else if(it!=parentnode){
              return true;
          }
      }
      return false;
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<int>vis(V,0);
        vector<vector<int>>adjls(V);
       for(auto it:edges){
            int u=it[0];
            int v=it[1];
            adjls[u].push_back(v);
            adjls[v].push_back(u);
       }
       for(int i=0;i<V;i++){
           if(!vis[i]){
           if(detectcycledfs(i,-1, adjls,vis))  return true;
           }
       }
       return false;
        
    }
};
