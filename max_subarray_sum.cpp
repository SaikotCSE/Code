#include<bits/stdc++.h>
using namespace std;
#define vc vector


int maxCrossingSum(vc<int> &v, int l, int mid, int r){
    int sum=0;
    int maxLeftIndex =0;
    int leftMaxSum=INT_MIN;
    for(int i=mid; i>=l; i--){
        sum+=v[i];
        if(sum>leftMaxSum) leftMaxSum = sum;
    }
    sum=0;
    int maxRightIndex=0;
    int rightMaxSum=INT_MIN;
    for(int i=mid+1; i<=r; i++){
        sum+=v[i];
        if(sum>rightMaxSum) rightMaxSum = sum;
    }
    return (leftMaxSum+rightMaxSum);
}

int getMaxSubarraySum(vc<int> &v, int l, int r){
    if(l==r) return v[l];
        int mid = (l+r)/2;
        int leftMaxSum = getMaxSubarraySum(v, l, mid);
        int rightMaxSum = getMaxSubarraySum(v, mid+1, r);
        int crossingMaxSum = maxCrossingSum(v, l, mid, r);
        return max({leftMaxSum, rightMaxSum, crossingMaxSum});
}

int main(){
    vc<int> v{-2, -5, 6, -2, -3, 1, 5, -6};
    int maxSum = getMaxSubarraySum(v, 0, 7);
    cout<<" MAx Sum: "<<maxSum<<endl;
}