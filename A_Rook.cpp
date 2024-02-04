#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vc vector
#define pb push_back
#define ff first
#define ss second
#define umap unordered_map
 
 
 
void solve(){
	string s;
	cin>>s;
	vc<pair<char,int>> v;
	int y=(s[1]-'0');
	while(y<8){
		++y;
		v.pb({s[0],y});
	}
	int k=(s[1]-'0');
	while(k>1){
		--k;
		v.pb({s[0],k});
	}
	char c=s[0];
	while(c>'a'){
		--c;
		v.pb({c,s[1]-'0'});
	}
	char l=s[0];
	while(l<'h'){
		++l;
		v.pb({l,s[1]-'0'});
	}
	for(int i=0; i<14; i++){
		cout<<v[i].ff<<v[i].ss<<endl;
	}
}
int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		solve();
	}
}