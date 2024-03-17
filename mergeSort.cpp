#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vc vector
#define pb push_back
#define ff first
#define ss second
#define umap unordered_map
 
const int N=1e7+10;
int Arr[N];

void merge(int left, int mid, int right){
    int Sl=mid-left+1;
    int Sr=right-mid;

    int L[Sl], R[Sr];

    for(int i=0; i<Sl; i++)     L[i]=Arr[left+i];
    for(int i=0; i<Sr; i++)     R[i]=Arr[mid+i+1];

    L[Sl]=R[Sr]=INT_MAX;
    int l_i=0, r_i=0;
    for(int i=left; i<=right; i++){
        if(L[l_i]<R[r_i]){
            Arr[i]=L[l_i];
            l_i++;
        }else{
            Arr[i]=R[r_i];
            r_i++;
        }
    }
}

void mergeSort(int left, int right){
    if(left<right){
        int mid=(right+left)/2;
        mergeSort(left,mid);
        mergeSort(mid+1,right);
        merge(left,mid,right);
    }
}

void solve(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        cin>>Arr[i];
    }
    cout<<"The original Array: ";
    for(int i=0; i<n; i++) cout<<Arr[i]<<" ";
    cout<<endl;
    mergeSort(0, n-1);
    cout<<"The sorted Array: ";
    for(int i=0; i<n; i++) cout<<Arr[i]<<" ";
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
}