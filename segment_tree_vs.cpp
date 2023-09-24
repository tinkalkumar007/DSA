#include<bits/stdc++.h>
using namespace std;
void build(int a[],vector<int> &tree,int node,int s,int e){
    if(s==e){
        tree[node]=a[s];
        return;
    }
    int mid=(s+e)/2;
    build(a,tree,2*node,s,mid);
    build(a,tree,2*node+1,mid+1,e);
    tree[node]=tree[2*node]+tree[2*node+1];
    return;
}
int query(vector<int> &tree,int node,int s,int e,int l,int r){
    if(r<s || l>e){
        return 0;
    }
    if(l<=s && r>=e){
        return tree[node];
    }
    int mid=(s+e)/2;
    int q1=query(tree,2*node,s,mid,l,r);
    int q2=query(tree,2*node+1,mid+1,e,l,r);
    return q1+q2;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int> tree(4*n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    build(a,tree,1,0,n-1);
    int height=1;
    for(int i=1;i<=15;i++){
        cout<<tree[i]<<" ";
    }
    cout<<endl;
    while(1){
        int l,r;
        cin>>l>>r;
        cout<<query(tree,1,0,n-1,l,r)<<endl;
        int type;
        cin>>type;
        if(type==-1){
            break;
        }
    }
    return 0;
}