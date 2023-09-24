#include<bits/stdc++.h>
using namespace std;
#define ll long long
int revenue(ll a[],ll n){
	ll maxRev=0;
	for(ll i=0;i<n;i++){
		ll rev=a[i]*(n-i);
		if(rev>maxRev){
			maxRev=rev;
		}
	}
	return maxRev;
}
int main(){
	ll t;
	cin>>t;
	ll a[t];
	for(ll i=0;i<t;i++){
		cin>>a[i];
	}
	sort(a,a+t);
	cout<<revenue(a,t)<<endl;
	return 0;
}
