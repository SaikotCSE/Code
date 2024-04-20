#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vc vector
#define pb push_back
#define ff first
#define ss second
#define umap unordered_map
#define forn for(int i=0; i<n; i++)
 
bool cmp(pair<int, int> &a, pair<int, int> &b){
    return a.ss<b.ss;
}
 
void solve(){
    int n; cin>>n;
    vc<pair<int, int>> v;
    forn{
        int s, e;
        cin>>s>>e;
        v.pb({s,e});
    }
    sort(v.begin(), v.end(), cmp);
    int count = 1, end = v[0].ss;
    for(int i= 1; i<n; i++){
        if(v[i].ff>end){
            count++;
            end = v[i].ss;
        }
    }
    cout<<"We can take the maximum "<<count<<" Activity."<<endl;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
}