/**
 * BFS : Bredth First Search 
 *      =>BFS visit nearest node first
 *      =>BFS explore nearest graph first 
 * TC : O(E+V)
 * 
 * Process :
 *      1.Start
 *      2.Create a queue
 *      3.insert root node into the queue
 *      4.while Q in not empty 
 *      5.  remove front node,u,form queue
 *      6.  process node u(print or, anything)
 *      7.  for each adjacent node v of u
 *      8.      if v is not visied 
 *      9.          mark v as visited 
 *      10.         insert v into queue  
 *      11.End
 */

#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>&adj,vector<int>&vis,int node){
    queue<int>q;
    q.push(node);
    vis[node]=1;
    while(!q.empty()){
        int u=q.front();q.pop();
        cout<<u<<" ";
        for(int &v:adj[u]){
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
            }
        }
    }
}

int main(){
    int n,e;cin>>n>>e;
    vector<vector<int>>adj(n+1);
    vector<int>vis(n+1,0);
    for(int i=0;i<e;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(adj,vis,1);
}