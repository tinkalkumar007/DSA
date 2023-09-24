#include<bits/stdc++.h>
using namespace std;
void heapify(int *a,int n,int i){
    int idx=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[l]>a[idx]){
        idx=l;
    }
    if(r<n && a[r]>a[idx]){
        idx=r;
    }
    if(idx!=i){
        swap(a[i],a[idx]);
        heapify(a,n,idx);
    }
}
void makeHeap(int *a,int n){
    int idx=(n/2)-1;
    for(int i=idx;i>=0;i--){
        heapify(a,n,i);
    }
    return;
}
void print(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    makeHeap(a,n);
    print(a,n);
    return 0;
}