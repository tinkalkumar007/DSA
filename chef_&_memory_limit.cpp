#include<iostream>
using namespace std;
#define ll long long
int main(){
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll a[n];
		cin>>a[0];
		ll memo=a[0];
		for(ll i=1;i<n;i++){
			cin>>a[i];
			if(a[i]-a[i-1]>0){
				memo+=(a[i]-a[i-1]);
			}
		}
		cout<<memo<<endl;	
	}
	return 0;
}
