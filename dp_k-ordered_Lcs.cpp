#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i,a,b) for(ll i=a; i<=b; i++)
#define INF 1000000009
#define mod 1000000007
ll n,m,a[2005],b[2005];
ll dp[2005][2005][8];
ll f(ll i,ll j,ll k){
	if(i>=n||j>=m){
		// if any string is finished ans is 0;
		return 0;
	}
	if(dp[i][j][k]!=-1){
		return dp[i][j][k];
	}
	ll res=0;
	if(a[i]==b[j]){
		res=1+f(i+1,j+1,k);
	}
	else{
		if(k>0){
			// we converted a single charcter to match with jth of string b
			res=1+f(i+1,j+1,k-1);
		}
		res=max(res,1+f(i,j+1,k));
		res=max(res,1+f(i+1,j,k));
	}
	return dp[i][j][k]=res;
}
int main(){
	memset(dp,-1,sizeof(dp));
	ll k;
	cin>>n>>m>>k;
	F(i,0,n-1){
		cin>>a[i];
	}
	F(j,0,m-1){
		cin>>b[j];
	}
	ll ans=f(0,0,k);
	cout<<ans<<endl;
	
	return 0;
}
