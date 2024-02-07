#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vc vector
#define pb push_back
#define ff first
#define ss second
#define umap unordered_map
 
 
 
void solve(){
    //input size
    int n; cin>>n;
    //input array elements
    vc<int> v;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.pb(x);
    }
    //iterating through the element
    for(int i=1; i<v.size(); i++){
        //storing the elements to be sorted in a temp variable.
        int key=v[i];
        int j= i-1;
        //checking if the key can be inserted into the place before this index
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
    //printing the sorted elements
    for(auto i: v)
    cout<<i<<" ";
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}