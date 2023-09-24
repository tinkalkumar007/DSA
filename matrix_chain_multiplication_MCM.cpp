#include<bits/stdc++.h>
using namespace std;
// matrix chain multiplication
int solve(int a[],int i,int j){
    // base case
    if(i>=j){
        return 0;
    }
    int ans=INT_MAX;
    // rec case
    for(int k=i;k<=j-1;k++){
        int temp=solve(a,i,k)+solve(a,k+1,j)+(a[i-1]*a[k]*a[j]);
        ans=min(ans,temp);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // find out minimum cost of matrix
    cout<<solve(a,1,n-1)<<endl;
    return 0;
}