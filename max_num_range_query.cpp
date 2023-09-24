#include<bits/stdc++.h>
using namespace std;
void buildTree(int tree[],int a[],int s,int e,int node){
    if(s==e){
        tree[node]=a[s];
        return;
    }
    int mid=(s+e)/2;
    buildTree(tree,a,s,mid,2*node);
    buildTree(tree,a,mid+1,e,2*node+1);
    tree[node]=max(tree[2*node],tree[2*node+1]);
    return;
}
int query(int tree[],int s,int e,int l,int r,int node){
    if(r<s || l>e){
        return INT_MIN;
    }
    if(l<=s && e<=r){
        return tree[node];
    }
    int mid=(s+e)/2;
    int q1=query(tree,s,mid,l,r,2*node);
    int q2=query(tree,mid+1,e,l,r,2*node+1);
    return max(q1,q2);
}
void update(int tree[],int a[],int s,int e,int node,int index,int val){
    if(s==e){
        tree[node]=val;
        a[s]=val;
        return;
    }
    int mid=(s+e)/2;
    if(index<=mid) update(tree,a,s,mid,2*node,index,val);
    else update(tree,a,mid+1,e,2*node+1,index,val);
    tree[node]=max(tree[2*node],tree[2*node+1]);
    return;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    int tree[4*n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    buildTree(tree,a,0,n-1,1);
    int index,val;
    cout<<"Enter Index and Val: ";
    cin>>index>>val;
    update(tree,a,0,n-1,1,index,val);
    //cout<<endl;
    while(1){
        int l,r;
        cin>>l>>r;
        cout<<query(tree,0,n-1,l,r,1)<<endl;
        int type;
        cin>>type;
        if(type==-1){
            break;
        }
    }
    return 0;
}