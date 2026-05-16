/*
DFS = Depth First Search
G(V,E) : V=vertex ,E=edges
TC : O(V+E)
=> Go deep first, then backtrack.

Process :
    DFS(vis,adj,node)
    1.Start from source node u
    2.Mark u as visited
    3.Print u
    4.for each adjacent node v of u :
    5.  if v is not visited ,then 
    6.      apply DFS on v
    7....    
*/
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&adj,vector<int>&vis,int node){
    vis[node]=1;
    cout<<node<<" ";
    for(auto&u:adj[node]){
        if(!vis[u])dfs(adj,vis,u);
    }
}
int main(){
    int n,e;cin>>n>>e;
    vector<int>vis(n+1,0);
    vector<vector<int>>adj(n+1);
    for(int i=0;i<e;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(adj,vis,1);
}