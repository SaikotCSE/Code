#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vc vector
#define pb push_back
#define ff first
#define ss second
#define umap unordered_map
 
int partition(int Arr[], int low, int high){
    int pivot = Arr[high];
    int i=low-1;
    for(int j=low; j<high; j++){
        if(Arr[j]<=pivot){
            i++;
            swap(Arr[i],Arr[j]);
        }
    }
    swap(Arr[i+1],Arr[high]);
    return i+1;
}
 
void QuickSort(int Arr[], int low, int high){
    if(low<high){
        int pidx = partition(Arr, low, high);
        QuickSort(Arr, low, pidx-1);
        QuickSort(Arr, pidx+1, high);
    }
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cout<<"Enter the array size: "<<flush;
    int n; cin>>n;
    int Arr[n];
    cout<<"Enter the array: "<<flush;
    for(int i=0; i<n; i++) cin>>Arr[i];
    QuickSort(Arr, 0, n-1);
    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++) cout<<Arr[i]<<" ";

}