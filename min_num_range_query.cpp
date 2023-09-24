#include<bits/stdc++.h>
using namespace std;
void buildTree(pair<long long,long long> tree[],int a[],int s,int e,int node){
    if(s==e){
        tree[node].first=a[s];
        tree[node].second=1;
        return;
    }
    int mid=(s+e)/2;
    buildTree(tree,a,s,mid,2*node);
    buildTree(tree,a,mid+1,e,2*node+1);
    if(tree[2*node].first<tree[2*node+1].first){
        tree[node].second=tree[2*node].second;
        tree[node].first=tree[2*node].first;
    }
    else if(tree[2*node+1].first<tree[2*node].first){
        tree[node].second=tree[2*node+1].second;
        tree[node].first=tree[2*node+1].first;
    }
    else{
        tree[node].first=tree[2*node].first;
        tree[node].second=tree[2*node+1].second+tree[2*node].second;
    }
    return;
}
pair<long long,long long> query(pair<long long,long long> tree[],int s,int e,int l,int r,int node){
    if(r<s || l>e){
        return {INT_MAX,0};
    }
    if(l<=s && e<=r){
        return tree[node];
    }
    int mid=(s+e)/2;
    pair<long long ,long long> q1=query(tree,s,mid,l,r,2*node);
    pair<long long,long long> q2=query(tree,mid+1,e,l,r,2*node+1);
    pair<long,long> q;
    if(q1.first==q2.first){
        q.first=q1.first;
        q.second=q1.first+q2.first;
    }
    else{
        q=min(q1,q2);
    }
    return q;
}
void update(pair<long long,long long> tree[],int a[],int s,int e,int node,int index,int val){
    if(s==e){
        tree[node].first=val;
        tree[node].second=1;
        a[s]=val;
        return;
    }
    int mid=(s+e)/2;
    if(index<=mid) update(tree,a,s,mid,2*node,index,val);
    else update(tree,a,mid+1,e,2*node+1,index,val);
    if(tree[2*node].first<tree[2*node+1].first){
        tree[node].second=tree[2*node].second;
        tree[node].first=tree[2*node].first;
    }
    else if(tree[2*node+1].first<tree[2*node].first){
        tree[node].second=tree[2*node+1].second;
        tree[node].first=tree[2*node+1].first;
    }
    else{
        tree[node].first=tree[2*node].first;
        tree[node].second=tree[2*node+1].second+tree[2*node].second;
    }
    return;
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    pair<long long,long long> tree[4*n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    buildTree(tree,a,0,n-1,1);
    while(m--){
        int type;
        cin>>type;
        if(type==1){
            //update
            int idx,val;
            cin>>idx>>val;
            update(tree,a,0,n-1,1,idx,val);
        }
        else if(type==2){
            // query
            int l,r;
            cin>>l>>r;
            pair<long long,long long> ans=query(tree,0,n-1,l,r-1,1);
            cout<<ans.first<<" "<<ans.second<<endl;
        }
    }
    return 0;
}