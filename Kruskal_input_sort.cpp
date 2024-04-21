#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vc vector
#define pb push_back
#define ff first
#define ss second
#define umap unordered_map
#define forn for(int i=0; i<n; i++)

bool cmp(pair<int,pair<int,int>> &a, pair<int,pair<int,int>> &b){
    return a.ff<b.ff;
}
 
void solve(){
    int n, e; cin>>n>>e;
    vc<pair<int,pair<int,int>>> g;

    for(int i=0; i<e; i++){
        int wt, u, v;
        cin>>wt>>u>>v;
        g.pb({wt, {u, v}});
    }

    sort(g.begin(), g.end(), cmp);

    cout<<"After sorting: "<<endl;
    for(auto& ele : g){
        cout<<ele.ff<<" "<<ele.ss.ff<<" "<<ele.ss.ss<<endl;
    }
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
}