#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
vector<vector<int>>adj;
int vis[N];
vector<int>path;
void dfs(int node){
    vis[node]=1;
    path.push_back(node);
    for(auto ch:adj[node]){
        if(!vis[ch])
            dfs(ch);
    }
}
void slove()
{
   int n,m;
   cin>>n>>m;
   adj.resize(n+1);
   for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
   }
   int as=0;
   for(int i=0;i<n;i++){
        if(!vis[i]){
            path.clear();
            dfs(i);
            bool cycle=1;
            for(auto it:path){
                cycle&=(sz(adj[it])==2);
            }
            as+=cycle;
        }
   }
   cout<<as;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);
    slove();
    return 0;
}

