/**
 * Dijkstra's Algorithm greedily choose the node with the minimun current distance.
 * It works when edge have non negative weight.
 * TC : O(E+V)logV
 * 
 * Process : 
 *  Dijkstra(adj,source_node)
 *  1.For each vertex of V : 
 *  2.set dis[v]=0
 *  3.set vis[v]=false
 *  4.dis[source]=0
 *  5.take a priority queue (min heap)
 *  6.insert {0,source} into pq
 *  7.while pq isn't empty ,do 
 *  8.  take (d,u)=pq.top()
 *  9.  pq.pop()
 *  10. if u is priivosly visited then : continue
 *  11. mark u as visited
 *  12. for each adjacent node v of u ://relaxation
 *  13.     if(dist[u]+weight(u,v)<dist[v])
 *  14.         dist[v]=dist[u]+weight(u,v)
 *  15.         pq.push((dist[v],v))
 *  16.End
 */

#include<bits/stdc++.h>
using namespace std;

void dijkstra(vector<vector<pair<int,int>>>&adj,int n,int source){
    vector<int>dist(n+1,1e9);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    dist[source]=0;
    pq.push({0,source});
    while(!pq.empty()){
        auto &[d,u]=pq.top();pq.pop();
        for(auto &eg:adj[u]){
            auto &[v,w]=eg
        }

    }


}

int main(){
    int n,e;cin>>n>>e;
    vector<vector<pair<int,int>>>adj(n+1);
    for(int i=0;i<e;i++){
        int u,v,w;cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    dijkstra(adj,n,1);
    return 0;
}