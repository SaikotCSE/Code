#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vc vector
#define pb push_back
#define ff first
#define ss second
#define umap unordered_map
 
const int N=1e3+10;
vc<bool> vis(N,false); 
vc<int> path(N);

vc<int> bfs(vc<vc<int>> &graph, int start){
    vc<int> order;

    queue<int> q;
    q.push(start);
    vis[start]=true;
    while(!q.empty()){
        int cur_v=q.front();
        q.pop();

        order.pb(cur_v);
        for(auto el: graph[cur_v]){
            if(!vis[el]){
                q.push(el);
                vis[el]=true;
                path[el]=cur_v;
            }
        }
    }
    return order;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int v, e; cin>>v>>e;
    vc<vc<int>> graph(N);
    for(int i=0; i<e; i++){
        int v1, v2; cin>>v1>>v2;
        graph[v1].pb(v2);
        graph[v2].pb(v1);
    }
    vc<int> order = bfs(graph, 0);
    cout<<"BFS traversal order: ";
    for(auto it: order){
        cout<<it<<" ";
    }cout<<endl;

    vc<int> pts;
    for(int i=0; i<v; i++){
        int T=i, c=0; 
        cout<<"Shortest Path of "<<i<<" is: ";
        while(T!=0){
            c++;
            pts.pb(T);
            T=path[T];
        }pts.pb(0);
        reverse(pts.begin(),pts.end());
        for(auto p: pts){
            cout<<p<<" ";
        }
        cout<<" cost :"<<c; cout<<endl;
        pts.clear();
    }
}