#include<iostream>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll x,y;
		cin>>x>>y;
		string s;
		cin>>s;
		ll streak=0,days=0,count=0;
		for(ll i=0;i<s.length();i++){
			if(s[i]=='1'){
				count++;
				days++;
			}
			else{
				if(count>streak){
					streak=count;
				}
				count=0;
			}	
		}
		if(count>streak) streak=count;
		cout<<(days*x+streak*y)<<endl;
	}
	return 0;
}
